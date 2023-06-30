//Bài 3: Viết chương trình kiểm tra phần tử X có thuộc dãy Fibonacci hay không.
#include <stdio.h> 

int main()
{
    int x, dem = 0;
    int x1, x2, x3;
    printf("\n Nhap x = "); scanf("%d", &x);

    x1 = 0;
    x2 = 1;
    while (x1 <= x*2)
    {
        printf("%3d", x1);

        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
        if (x == x1) dem++;
    }

    if (dem != 0) printf("\n Phan tu %d co nam trong day Fibonacy", x);
    else printf("\n Phan tu %d khong nam trong day Fibonacy !", x);
}