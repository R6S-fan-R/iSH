#include<stdio.h>

 int main (void)
{
    int B[8][8];
    int i, j;
    int scanx, scany;
    char yesno = '0';
    int the_end = 0;

    printf("   1 2 3 4 5 6 7 8\n");
    for(i = 0; i < 8; i ++)
        {
            printf("%d  ", i + 1);
            for(j = 0; j < 8; j ++)
                {
                    B[i][j] = 0;
                    printf("%d ", B[i][j]);
                }
            printf("\n");
        }

    
    while(the_end != 64)
        {

            while(yesno != 'y')
                    {
                        printf("player 1\nx = ");
                        scanf("%d", &scanx);
                        printf("y = ");
                        scanf("%d", &scany);
                        printf("x = %d, y = %d \n y/n\n", scanx, scany);
                        scanf(" %c", &yesno);
                    }
            
        B[scanx - 1][scany - 1] = 1;

        printf("   1 2 3 4 5 6 7 8\n");
        for(i = 0; i < 8; i ++)
            {
                printf("%d  ", i + 1);
                for(j = 0; j < 8; j ++)
                    {
                        printf("%d ", B[i][j]);
                    }
                printf("\n");
            }
        
        yesno = '0';
        
        while(yesno != 'y')
            {
                printf("player 2\nx = ");
                scanf("%d", &scanx);
                printf("y = ");
                scanf("%d", &scany);
                printf("x = %d, y = %d \n y/n\n", scanx, scany);
                scanf(" %c", &yesno);
            }

        

        B[scanx - 1][scany - 1] = 2;

        printf("   1 2 3 4 5 6 7 8\n");
        for(i = 0; i < 8; i ++)
            {
                printf("%d  ", i + 1);
                for(j = 0; j < 8; j ++)
                    {
                        printf("%d ", B[i][j]);
                    }
                printf("\n");
            }

        the_end = 0;

        for(i = 0; i < 8; i ++)
            {
                for(j = 0; j < 8; j ++)
                    {
                        if(B[i][j] != 0)
                        {
                            the_end ++;
                        }
                    }
            }

    }


    printf("\n\n終了");

    return 0;
}
