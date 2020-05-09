#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    int **pp = NULL;
    int n, i, j;
    double avg = 0;

    scanf("%d", &n);

    pp = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        *(pp+i) = (int*)malloc((i+1) * sizeof(int));
        *(*(pp+i) + 0) = 1;
        *(*(pp + i) + i) = 1;
        for (j = 1; j < i; j++)
        {
            *(*(pp + i) + j) = *(*(pp + i - 1) + j) + *(*(pp + i - 1) + j - 1);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%2d ", *(*(pp + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        free(*(pp+i));
    }
    free(pp);


    getch();
    return 0;
}
