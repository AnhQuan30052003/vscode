/*Viết chương trình  nhập 1 mảng số nguyên a có n phần tử (1 ≤ n ≤ 50). Thực hiện các chức năng sau:
a.      Tạo mảng b gồm các số âm của mảng a và sắp xếp mảng b theo thứ tự tăng dần
b.      Tìm số chẵn lớn nhất
c.      Tính trung bình cộng các số âm lẻ của mảng
d.      Hãy cho biết mảng có chứa phần tử có giá trị 0 hay không?
e.      In ra các phần tử có số lần lặp lại đúng 2 lần trong mảng
*/
#include <stdio.h> 
#include <conio.h>

//nhap mang
void nhapMang(int a[], int &na)
{
    printf("\nSo phan tu trong mang (1 <= n <= 50): ");
    do{
        scanf("%d", &na);  
    } while (!(na >= 1 && na <= 50) && printf("\nNhap sai dieu kien!. Hay nhap lai: "));
    //tao mang
    for (int i=1; i<=na; i++)
    {
        printf("a[%d]:\t", i); scanf("%d", &a[i]);  
    }
}
//cau a
void taoMangB(int a[], int na, int b[], int &nb)
{
    nb = 1;
    int demDuong = 0;
    for (int i=1; i<=na; i++)
    {
        if (a[i] < 0)
        {
            b[nb] = a[i];
            nb++;
        }
        else
            demDuong++;
    }
    nb--;
    if (demDuong == na)
        printf("\n-Trong mang KHONG co so am!"); 
    else
    {
    //sap xep mang B tang dan
    for (int i=1; i<nb; i++)
    {
        for (int j=i+1; j<=nb; j++)
        {
            if (b[i] > b[j])
            {
                int x = b[i];
                b[i] = b[j];
                b[j] = x;
            }
        }
    }
    printf("\n-Mang B sau khi tao va duoc xep tang dan:"); getch();
    for (int i=1; i<=nb; i++)
        printf("\nb[%d]:\t%d", i, b[i]); 
    }
}
//cau b
void soAmChanLonNhat(int b[], int nb)
{
    int max = 0;
    for (int i=1; i<=nb; i++) //tim ra so am chan bat ky roi gan no lam lon nhat
        if (b[i] % 2 == 0)
        {
            max = b[i];
            break;
        }
    if (max != 0)
    {
        for (int i=1; i<=nb; i++) //bat dau loc tim
            if (b[i] % 2 == 0 && b[i] > max)
                max = b[i];
        printf("\n-So am (chan) lon nhat: %d", max); 
    }
    else
        printf("\n-Trong mang khong co so am (chan)!"); 
}
//cau c
void tbcAmLe(int b[], int nb)
{   
    float tong = 0, demAmLe = 0, demAmChan = 0;
    for (int i=1; i<=nb; i++)
        if (b[i] % 2 == -1)
        {
            tong += b[i];
            demAmLe++;
        }
        else
            demAmChan++;
    if (demAmChan == nb)
        printf("\n-Trong mang KHONG co so am (le)!"); 
    else
        printf("\n-Trung binh cong cac so am (le): %g", (float) tong/demAmLe); 
}
//cau d
void timGiaTri0(int b[], int nb)
{
    int ktra = 0;
    for (int i=1; i<=nb; i++)
    {
        if (b[i] == 0)
        {
            printf("\n-Trong mang co phan tu co gia tri bang 0"); 
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Trong mang KHONG co phan tu co gia tri bang 0!"); 
}
//cau e
void lapLai(int b[], int nb)
{
    int demLap2;
    printf("\n-Phan tu co so lan lap lai dung 2 lan: "); getch(); 
    for (int i=1; i<=nb; i++)
    {
        demLap2 = 0;
        for (int j=1; j<=nb; j++)
            if (b[j] == b[i])
                demLap2++;
        if (demLap2 == 2)
            printf("b[%d] ", i);
    }
    if (demLap2 == 0)
        printf("KHONG co!"); 
}

int main()
{
    int a[100], na, b[100], nb;
    nhapMang(a, na); getch();
    taoMangB(a, na, b, nb); getch();    
    soAmChanLonNhat(b, nb); getch();
    tbcAmLe(b, nb); getch();
    timGiaTri0(b, nb); getch();
    lapLai(b, nb); getch();
}