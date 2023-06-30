// Viết chương trình nhập 1 mảng số nguyên có n phần tử (1 ≤ n ≤ 50), rồi tìm phần tử nhỏ nhất, phần tử lớn nhất trong mảng.
#include <stdio.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("\nSo phan tu mang (1 <= n <= 50): "); scanf("%d", &n);  
    } while (!(n >= 1 && n <= 50));

    for (int i=1; i<=n; i++)
    {
        printf("\nPhan tu thu %d: ", i); scanf("%d", &a[i]);  
    }
}
void max(int a[], int n)
{
    int max = a[0];
    for (int i=1; i<=n; i++)
        if (a[i] > max)
            max = a[i];
    printf("\nPhan tu lon nhat la: %d", max); 
}
void min(int a[], int n)
{
    int min = a[0];
    for (int i=1; i<=n; i++)
        if (a[i] < min)
            min = a[i];
    printf("\nPhan tu nho nhat la: %d", min); 
}

int main()
{
    int a[100], n;
    nhapMang(a, n);
    max(a, n);
    min(a, n);
}
