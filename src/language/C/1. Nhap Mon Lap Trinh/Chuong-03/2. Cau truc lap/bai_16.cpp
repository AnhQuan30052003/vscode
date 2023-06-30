/*   Nhập một số nguyên dương n (n > 0), sau đó thực hiện các yêu cầu sau:

    a. Kiểm tra n có phải là số đối xứng không?

Ví dụ: Các số 121, 12321 là các số đối xứng; Các số 124, 5142 là các số không đối xứng

    b. Kiểm tra các chữ số trong n có tăng dần hay giảm dần không?

Ví dụ: 2367 là số có chữ số tăng dần; 8642 là số có chữ số giảm dần
*/
#include <iostream>

void kiem_tra_so_doi_xung (int n);
void kiem_tra_chieu (int n);

/////////////////////////////////////* Ham main */////////////////////////////
int main()
{
    int n;
    do
    {
        std::cout << "Nhap so nguyen duong n > 0: ";
        std::cin >> n; 
    } while (n <= 0);

    kiem_tra_so_doi_xung (n);

    std::cout << std::endl;

    kiem_tra_chieu (n);
}
/////////////////////////////////////* The end */////////////////////////////

void kiem_tra_so_doi_xung (int n)
{
    int sum = 0;
    int m = n;

    for (int x; m > 0; m/=10)
    {
        x = m % 10;
        sum = sum*10 + x;
    }

    if (sum == n)
        std::cout << " -> " << n << " La so doi xung";
    else
        std::cout << " -> "<< n << " Khong phai so doi xung !";
}

void kiem_tra_chieu (int n)
{
    int ktra_sai = 0;
    int gia_tri_do = 10;

    for (int m = n; m > 0; m /= 10)
    {
        int x = m % 10;
        if (x < gia_tri_do)
            gia_tri_do = x;
        else
            ktra_sai++;
    }

    if (ktra_sai == 0)
        std::cout << " -> Cac chu so trong " << n << " tang dan";
    else
        std::cout << " -> Cac chu so trong " << n << " khong tang dan !";
}