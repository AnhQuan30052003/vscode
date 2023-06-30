#include <stdio.h>
#include <conio.h>
//cau 1
void tong(int a, int b)
{
    printf("\n%d + %d = %d", a, b, a+b);
}
//cau 2
void hieu(int a, int b)
{
    printf("\n%d - %d = %d", a, b, a-b);
}
//cau 3
void thuong(int a, int b)
{
    if (b != 0)
        printf("\n%d : %d = %g", a, b, (float) a/b); 
    else 
        printf("\nKo chia duoc!"); 
}
//cau 4
void tich(int a, int b)
{
    printf("\n%d x %d = %d", a, b, a*b);
}
//cau 5
void max(int a, int b)
{
    int max;
    (a > b) ? max = a : max = b;
    printf("\nSo lon nhat la: %d", max);
}
//cau 6
void uscln(int a, int b)
{
    int uc;
    while (a != b)
    (a > b) ? a -= b : b -= a;
    uc = a = b;
    printf("\nUSCLN = %d", uc);
}
//cau 7
void bscnn(int a, int b)
{
    int uc, t_a = a, t_b = b;
    while (a != b)
    (a > b) ? a -= b : b -= a;
    uc = a = b;
    printf("\nBSCNN = %d", t_a*t_b/uc); 
}

int main()
{
    int a=1, b=2, menu;
    printf("\nNhap 2 so nguyen duong a & b: ");
    do{
        scanf("%d%d", &a, &b);
    } while (!(a > 0 && b > 0) && printf("\nCo so khong thoa!. Hay nhap lai: "));

    printf("\n(1) Tong 2 so \n(2) Hieu 2 so \n(3) Thuong 2 so \n(4) Tich 2 so \n(5) Tim so lon nhat \n(6) USCLN cua 2 so \n(7) BSCNN cua 2 so"); 
    
    printf("\nHay chon 1 so trong menu: ");
    chonLai:
    scanf("%d", &menu);  

    switch (menu)
    {
        case (1):
            tong(a, b);
            break;
        case (2):
            hieu(a, b);
            break;
        case (3):
            thuong(a, b);
            break;
        case (4):
            tich(a, b);
            break;
        case(5):
            max(a, b);
            break;
        case (6):
            uscln(a, b);
            break; 
        case (7):
            bscnn(a, b);
            break;
        default:
            printf("\n%d khong co trong ban menu!", menu);
            printf("\nNeu ban muon tiep tuc. Hay chon lai: "); 
            goto chonLai;
    }
}
