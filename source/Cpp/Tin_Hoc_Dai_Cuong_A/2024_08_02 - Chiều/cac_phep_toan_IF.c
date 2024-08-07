// Su dung if else
#include <stdio.h>
#include "calculator.h"

void main(void) {
    system("cls");

    int a, b;
    char pt;

    printf("Nhap a & b: ");
    scanf("%d%d", &a, &b);
    fflush(stdin);

    while (1) {
        printf("Nhap mot trong cac phep tinh (+, -, *, /, %%): ");
        scanf("%c", &pt);

        if (pt == '+') {
            printf("Tong: %d + %d = %d", a, b, tong(a, b));
        }
        else if (pt == '-') {
            printf("Hieu: %d - %d = %d", a, b, hieu(a, b));
        }
        else if (pt == '*') {
            printf("Tich: %d * %d = %d", a, b, tich(a, b));
        }
        else if (pt == '/') {
            thuong(a, b);
        }
        else if (pt == '%') {
            chiaDu(a, b);
        }
        else {
            printf("Khong nhap phep tinh nao trong (+, -, *, /, %%) !");
        }

        printf("\nNhap tiep phep tinh (1), dung (0): ");
        fflush(stdin);
        scanf("%c", &pt);
        if (pt == '0') {
            break;
        }
        else if (pt == '1') {
            fflush(stdin);
            printf("\n");
        }
        else {
            printf("\nHay nhap 0 hoac 1: ");
        }
    }
}