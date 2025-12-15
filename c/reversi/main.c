#include<stdio.h>

 int main (void)
{
    int B[8][8];
    int i, j;
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
    char yesno = '0';
    scanf("%d", &scanx);
    scanf("%d", &scany);
    printf("x = %d, y = %d \n y/n", scanx, scany);
    scanf(" %c", &yesno);
    if(yesno == 'y')
    {
        B[scanx][scany] = 2;

        for(i = 0; i < 8; i ++)
        {
            for(j = 0; j < 8; j ++)
                {
                    B[i][j] = 0;
                    printf("%d ", B[i][j]);
                }
        printf("\n");
        }

    }
    else{
        scanf("%d", &scanx);
        scanf("%d", &scany);
        printf("x = %d, y = %d \n y/n", scanx, scany);
        scanf("%c", &yesno);
        }

    return 0;
}
