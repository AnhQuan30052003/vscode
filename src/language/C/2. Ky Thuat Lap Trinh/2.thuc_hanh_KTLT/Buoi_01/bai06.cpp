/*
Bài 6: Chú mèo máy Đorêmon có n cái bánh cần rán, mỗi bánh có hai mặt, mỗi lần rán một mặt.
Đorêmon có một cái chảo có thể rán được k cái bánh cùng lúc. Mỗi lần rán một mặt bánh tốn 5 phút.
Hỏi Đorêmon cần ít nhất bao nhiêu phút để rán hết n cái bánh?
*/

// Mot cai banh phai ran 5p
#include <stdio.h> 

int ran_banh(int n, int k);

int main()
{
    int n, k;
    printf("\n Nhap so banh: "); scanf("%d", &n);
    printf(" Nhap so banh co the ran cung luc: "); scanf("%d", &k);

    printf("\n-> Doraemon can it nhat %d phut de ran het %d cai banh", ran_banh(n, k)*10, n);

}

inline int ran_banh(int n, int k)
{
    int so_lan = n / k;
    int x = n % k;
    if (x != 0) so_lan++;
    return so_lan;
}