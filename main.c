#include <stdio.h>
#include <locale.h>

void task1();

int main()
{
    setlocale(LC_ALL, "RUS");
    task1();
    return 0;
}

void task1()
{
    double x, y;
    int repeat = 1;
    while (repeat == 1)
    {
        printf("Введите координаты точки (x y):");
        scanf("%lf %lf", &x, &y);
        if ((x >= 0 && x <= 3 && y >= 0 && y <= 4) ||
            (x >= -3 && x <= 0 && y >= -3 && y <= 0))
        {
            printf("Точка (%.2f, %.2f) ПРИНАДЛЕЖИТ области\n", x, y);
        }
        else
        {
            printf("Точка (%.2f, %.2f) НЕ ПРИНАДЛЕЖИТ области\n", x, y);
        }
        printf("Проверить еще одну точку? (1 - да, 0 - нет):\n");
        scanf("%d", &repeat);
        printf("\n");
    }
}