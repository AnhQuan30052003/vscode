// Su dung switch case
#include <stdio.h>

int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
void thuong(int a, int b);
void chiaDu(int a, int b);

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

        switch (pt) {
            case '+': {
                printf("Tong: %d + %d = %d", a, b, tong(a, b));
                break;
            }

            case '-': {
                printf("Hieu: %d - %d = %d", a, b, hieu(a, b));
                break;
            }

            case '*': {
                printf("Tich: %d * %d = %d", a, b, tich(a, b));
                break;
            }

            case '/': {
                thuong(a, b);
                break;
            }

            case '%': {
                chiaDu(a, b);
                break;
            }

            default: {
                printf("Khong nhap phep tinh nao trong (+, -, *, /, %%) !");
            }
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


int tong(int a, int b) {
    return a + b;
}

int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

void thuong(int a, int b) {
    if (b != 0) {
        float ketQua = (float) a / b;
        printf("Thuong: %d / %d = %.2f", a, b, ketQua);
    }
    else {
        printf("Thuong: Loi chia cho 0 !");
    }
}

void chiaDu(int a, int b) {
    if (b != 0) {
        int ketQua =  a % b;
        printf("Chia du: %d %% %d = %d", a, b, ketQua);
    }
    else {
        printf("Chia du: Loi chia cho 0 !");
    }
}