#include <stdio.h>
#include <math.h>

int main()
{
    int num[3][3];
    printf("9 number Input Please  : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", num[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}
