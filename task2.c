#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double y_function(double t, double z) {
    double y;

    if (t < 0 && z < 0) {
        // y = z + 4 * |t^3| * sin(t)
        // |t^3| -> fabs(pow(t, 3))
        // sin(t) -> sin(t)
        y = z + 4 * fabs(pow(t, 3)) * sin(t);

    } else if (t > 0 && z > 0) {
        // y = √(z^2 + 3 * cos(t^2))
        // √(...) -> sqrt(...)
        // z^2 -> pow(z, 2)
        // t^2 -> pow(t, 2)
        // cos(...) -> cos(...)
        y = sqrt(pow(z, 2) + 3 * cos(pow(t, 2)));

    } else {
        // 1 в усіх інших випадках
        y = 1;
    }

    return y;
}

int main(void) {
    double t, z;

    // Використовуємо форматований вивід та ввід з клавіатури
    printf("Введіть значення змінної t: ");
    scanf("%lf", &t);

    printf("Введіть значення змінної z: ");
    scanf("%lf", &z);

    printf("\nРезультат виконання функції y_function: %f", y_function(t, z));

    return 0;
}
