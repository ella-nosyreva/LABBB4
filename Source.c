#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, c;
    int condition;

    printf("=== КОНТРОЛЬ КАЧЕСТВА ИГРУШЕК ===\n");
    printf("Введите вес трех игрушек (A, B, C) в граммах: ");

    scanf("%d %d %d", &a, &b, &c);

    condition = (a % 7 == 0) && (b % 7 == 0) && (c % 7 == 0);

    printf("Партия принята (1 - да, 0 - нет): %d\n", condition);

    return 0;
}