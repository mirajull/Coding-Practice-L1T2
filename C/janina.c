#include <stdio.h>
#include <stdarg.h>

void printBits(int x)
{
    int i;
    int mask = (1 << 31);
    for (i = 0; i < 32; i++)
    {
        (x & mask) ? putchar('1') : putchar('0');
        x <<= 1;
    }
}

void myPrintf(char *fmt, ...)
{
    va_list ap;
    char *p;
    int ival;

    va_start(ap, fmt);
    for (p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }

        switch(*++p)
        {
            case 'b':
            {   ival = va_arg(ap, int);
                printBits(ival);
                break;
            }
            case 'd':
            {   ival = va_arg(ap, int);
                printf("%d", ival);
                break;
            }
            default:
            {
                putchar(*p);
                break;
            }
        }
    }

    va_end(ap);
}

int main(int argc, char *argv[])
{
    int x;

    while (EOF != scanf("%d", &x))
        myPrintf("Bit patter of %d is: %b\n", x, x);

    return 0;
}
