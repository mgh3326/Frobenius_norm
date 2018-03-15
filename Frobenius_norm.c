#include <stdio.h>
#include <math.h>

int main()
{
    double row[10];
    double col[10];
    double ohoh[100]; // 10 * 10
    int row_num = 0;
    int col_num = 0;
    double output = 0;
    printf("행과 열의 크기를 입력하시오.\n");
    scanf("%d %d", &row_num, &col_num);
    printf("원소를 입력하시오.\n");
    int index = 0;
    for (int j = 0; j < col_num; j++)
    {
        for (int i = 0; i < row_num; i++)
        {
            scanf("%lf", &ohoh[index]);
            index++;
        }
    }
    for (int i = 0; i < row_num * col_num; i++)
    {
        output += ohoh[i] * ohoh[i];
    }
    output = sqrt(output);

    printf("Frobenius nrom 은 %lf\n", output);
}

// 11	12	13
// 21	22	23

// 11+12+13+21+22+23

// ??? ???? ??? ???????.
// 2 3
// ????? ???????.
// 1.0 2.0 3.0
// 4.0 5.0 6.0
// Frobenius nrom ?? 9.539392

// ??? ???? ??? ???????.
// 1 4
// ????? ???????.
// 1.0 2.0 3.0 4.0
// Frobenius nrom ?? 5.477226