/*
Bài 9: Có một con ốc sên muốn bò lên đỉnh của một cái cây cao V mét tính từ mặt đất.
Trong một ngày nó có thể bò được A mét lên trên, tuy nhiên mỗi đêm khi ngủ, nó lại bị tụt xuống B mét.
Nhiệm vụ của bạn là hãy viết chương trình xác định số ngày con ốc sên cần để bò lên đến đỉnh cây.
*/
#include <bits/stdc++.h>

int oc_sen(int v, int a, int b)
{
    int tien_do = 0;
    for (int ngay = 1; ngay <= v; ngay++)
    {
        tien_do += a;
        if (tien_do >= v) return ngay;
        tien_do -= b;
    }
    return 0;
}

int main()
{
    int v, a, b;
    do { printf(" Nhap V, A, B cua oc sen: "); scanf("%d%d%d", &v, &a, &b);} 
    while (!((v >= 1 && v <= pow(10,9)) && (b >= 1 && b <= pow(10,9)) && (a >= 1 && a <= pow(10,9)) && (b < a)));

    printf("-> So ngay oc sen bo len duoc cay cao %d met la: %d ngay", v, oc_sen(v, a, b));
}