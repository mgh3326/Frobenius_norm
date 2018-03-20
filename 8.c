#include <stdio.h>
#include <math.h>

int main()
{
    int num[20];
    printf("20 number or -1 Input Please  : ");
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == 0)
            break;
        count++;
    }
    int total = 0;
    int min = 0;
    for (int i = 0; i < count; i++)
    {
        total = 0;
        for (int k = 0; k < i; k++)
        {
            for (int j = k; j < count - i; j++)
            {
                total += num[j];
            }
            if (min > total)
                min = total;
        }
    }
    printf("min : %d\n", min);
    return 0;
}
