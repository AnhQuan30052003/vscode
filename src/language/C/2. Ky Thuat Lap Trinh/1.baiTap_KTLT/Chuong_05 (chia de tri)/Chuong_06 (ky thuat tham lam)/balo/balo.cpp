// Su dung ky thuat tham lam, uu tien lay vat co gia tri lon nhat nhung the tich nho nhat
#include <bits/stdc++.h>

int tt[] = {1,2,3};
int gt[] = {5,4,4}; 
int v = 5;
int n = sizeof(tt)/sizeof(tt[0]);
float gtt[50];

void hoan_vi(int &a, int &b, int &c, int &d)
{
    int x, y;
    x = a; y = b;
    a = c; b = d;
    c = x; d = y;
}

void sap_xep()
{
    // Gia tri so sanh khi bo vao balo
    for (int i = 0; i < n; i++)
        gtt[i] = (float) gt[i]/tt[i];

    // Sap giam gian theo gia tri vat
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (gt[j] > gt[i]) hoan_vi(tt[i], gt[i], tt[j], gt[j]);
            else if (gt[j] == gt[i] && gtt[j] > gtt[i])
                hoan_vi(tt[i], gt[i], tt[j], gt[j]);
        }
}

void chon()
{
    sap_xep();
    int tong_v = 0, tong_gt = 0;;
    for (int i = 0; i < n; i++)
        if (tong_v + tt[i] <= v)
        {
            tong_v = tong_v + tt[i];
            tong_gt = tong_gt + gt[i];
            printf("\n The tich: %d; Gia tri: %d", tt[i], gt[i]);
        }

    printf("\n V bo duoc: %d/%d", tong_v, v);
    printf("\n Gia tri bo duoc: %d", tong_gt);
}

int main()
{
    chon();
}