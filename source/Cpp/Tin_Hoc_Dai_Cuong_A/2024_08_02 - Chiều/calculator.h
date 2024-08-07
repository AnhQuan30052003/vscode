int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
void thuong(int a, int b);
void chiaDu(int a, int b);

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