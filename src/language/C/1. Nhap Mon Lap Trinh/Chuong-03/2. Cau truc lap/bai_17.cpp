/*  Viết chương trình nhập số nguyên thỏa điều kiện 0 < n < 100, sau đó thực hiện các yêu cầu sau:

    a. In tất cả những số nguyên tố <= n.

    b. Tính tổng các số nguyên tố <= n.

Ví dụ: Nhập n = 10.

        In ra: - Các số nguyên tố <= 10 là: 2, 3, 5, 7

                 - Tổng các số nguyên tố <= 10 là: 17
*/
#include <iostream>

void in_so_nguyen_to (int n);
int tong_so_nguyen_to (int n);

/////////////////////////////////////////////////////////* Ham main *////////////////////////////////////////////////////////////
int main()
{
    int n;
    do
    {
        std::cout << "Nhap so nguyen duong n thoa (0 < n < 100): ";
        std::cin >> n;
    } while (!(n > 0 && n < 100));

    std::cout << "So nguyen to <= " << n << ": ";
    in_so_nguyen_to (n);

    std::cout << "\nTong cac so nguyen to: " << tong_so_nguyen_to (n);

}
/////////////////////////////////////////////////////////* The end *////////////////////////////////////////////////////////////
int ktra_so_nguyen_to (int x)
{
    int dem = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            dem++;
    
    if (dem == 2)
        return true;
    return false;
}

void in_so_nguyen_to (int n)
{
    int ktra_sai = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ktra_so_nguyen_to (i) == true)
            std::cout << " " << i;
        else
            ktra_sai++;
    }

    if (ktra_sai == n)
        std::cout << "khong co !";
}

int tong_so_nguyen_to (int n)
{
    int sum = 0, ktra_sai = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ktra_so_nguyen_to (i) == true)
            sum += i;
        else
            ktra_sai++;
    }

    if (ktra_sai == n)
        return 0;
    return sum;
}