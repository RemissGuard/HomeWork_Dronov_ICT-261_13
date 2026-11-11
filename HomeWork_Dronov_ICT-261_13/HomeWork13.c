#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 1251");
    int k,s,x,n;
    float sred;
    k = 0;
    s = 0;
    puts("Ввведите размер массива");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &x);
        A[i] = x;
        if (A[i] != 0) {
            s += A[i];
            k++;
        }
    }
    sred = (float)s / (float)k;
    printf("Среднее арифметическое значение всех ненулевых элементов = %f", sred);
}