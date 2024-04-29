#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, t, b, product = 1, first_minus_num = -1, last_minus_num = -1, max = 0;

        

        printf("Введіть розмір масиву n: ");
        scanf("%d", &n);

        printf("Введіть масив цілих чисел:\n");
        
        int a[n];

            for (int i = 0; i < n; i++) {
                scanf("%d", &a[i]);
            }

            for (int i = 0; i < n; i++) {
                if (a[i] < 0) {
                    if (first_minus_num == -1) {
                        first_minus_num = i;
                    } else {
                        last_minus_num = i;
                    }
                }
            }
    do {

        printf("\n1. Завдання №1");
        printf("\n2. Завдання №2");
        printf("\n0. Вихід з програми\n");
        printf("\nВведіть номер (0-2): ");
        scanf("%d", &b);

        switch (b) {
            case 1:
               if (first_minus_num == -1 && last_minus_num == -1) {
                    printf("Немає від'ємних чисел в масиві\n");
                } else if (first_minus_num != -1 && last_minus_num == -1) {
                    printf("В масиві є лише один від'ємний елемент\n");
                } else if (first_minus_num != -1 && last_minus_num != -1 && last_minus_num - first_minus_num > 1) {
                        product = 1;
                    for (int i = first_minus_num + 1; i < last_minus_num; i++) {
                        product *= a[i];
                    }
                        printf("Добуток елементів масиву, розташованих між першим і останнім від'ємними елементами: %d\n", product);
                } else {
                    printf("Між двома від'ємними числами немає інших чисел\n");
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    if (a[i] > max) {
                        max = a[i];
                    }
                }

                printf("Максимальний елемент = %d\n", max);
                break;

            case 0:
                printf("Вихід з програми\n");
                break;

            default:
                printf("Неправильна цифра\n");
                break;
        }
    } while (b != 0);

    return 0;
}
