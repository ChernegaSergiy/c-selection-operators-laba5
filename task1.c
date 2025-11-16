#include <stdio.h>

int main(void) {
    int c, d;

    // Використовуємо форматований вивід та ввід з клавіатури
    printf("Введіть значення змінної C: ");
    scanf("%d", &c);

    printf("Введіть значення змінної D: ");
    scanf("%d", &d);

    if (c < 0 && d < 0) {
        printf("Числа в змінних мають від'ємні значення - рахуємо суму квадратів...\n");
        int sum = (c * c) + (d * d);
        printf("\nРезультат: %d", sum);
    } else {
        printf("Числа не є обидва від'ємними - рахуємо квадрат суми...\n");
        long int mult = (long int) (c + d) * (c + d);
        printf("\nРезультат: %ld", mult);
    }

    return 0;
}
