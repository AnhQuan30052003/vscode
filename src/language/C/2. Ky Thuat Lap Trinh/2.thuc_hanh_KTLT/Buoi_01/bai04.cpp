//Bài 4: Viết chương trình kiểm tra một số có phải là số nguyên tố hay không.
#include <stdio.h> 

int so_nguyen_to (int x);

int main()
{
    int x;
    do{
        printf("\n Nhap so nguyen duong x = "); scanf("%d", &x);
    } while (!(x > 0));

    if (x == 2 || so_nguyen_to(x) == true) printf(" %d la so nguyen to", x);
    else printf(" %d khong phai so nguyen to!", x);
}

inline int so_nguyen_to (int x)
{
    int dem = 0;
    for (int i = 1; i <= x/2; i++)
        if (x % i == 0) dem++;
    
    if (dem == 1) return true;
    return false;
}
