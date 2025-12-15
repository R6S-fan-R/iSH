#include<stdio.h>

 int main (void)
{
    int B[8][8];
    int i, j, k;
    for(i = 0; i < 8; i ++)
    {
        for(j = 0; j < 8; j ++)
        {
            B[i][j] = 0;
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    int scanx, scany;
    scanf("%d", &scanx);
    scanf("%d", &scany);
    B[scanx][scany] = 2;

    return 0;
}
