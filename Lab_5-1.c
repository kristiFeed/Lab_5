#include <stdio.h>

int main() {

    int n, x, sum = 0;

    printf("Введіть розмір масиву n: ");
    scanf("%d", &n);

    printf("Введіть ціле число x (менше за n): ");
    scanf("%d", &x);

    if (x >= n) {
        printf("Помилка: x повинно бути менше за n.\n");
        return 1;
    }

    int a[n];

    printf("Введіть масив цілих чисел:\n");

    for (int i = 0; i < n; i++) {

        scanf("%d", &a[i]);
        
    }
   
    for (int i = 0; i < x; i++) {

        sum += a[i] * a[i];

    }

    printf("Сума квадратів перших %d елементів: %d\n", x, sum);

    return 0;
}
