/*
Cho n quả cân có các khổi lượng tương ứng là: q1, q2,…,qn (nguyên) và một cái cân 2 đĩa (khi cân có thể đặt một số quả cân và vật cần cân trên đĩa nào cũng được, sao cho cân thăng bằng).
Yêu cầu: Hãy cho biết bộ quả cân này có thể dùng để cân được những vật có khổi lượng bao nhiêu?
Bài toán: quả cân thăng bằng
*/
#include <bits/stdc++.h>

int a[] = {1,2,3,4,5};
int n = sizeof(a)/sizeof(a[0]);
int tt[50];
int s1 = 0, s2 = 0;

void in()
{
    if ((s1 == s2) && (s1 != 0))
    {
        printf("\n------------------------------------");
        printf("\n Dia trai: ");
        for (int i = 0; i < n; i++)
            if (tt[i] == -1) printf("%2d", a[i]);

        printf("\n Dia phai: ");
        for (int i = 0; i < n; i++)
            if (tt[i] == 1) printf("%2d", a[i]);
    }
}

void thu(int vt)
{
    for (int i = -1; i <= 1; i++)
    {
        tt[vt] = i;
        if (i == -1) s1 += a[vt];
        if (i == 1) s2 += a[vt];
        if ((vt == n-1) || ((s1 == s2) && (s1 != 0))) in();
        else thu(vt+1);
        if (i == -1) s1 -= a[vt];
        if (i == 1) s2 -= a[vt];
        tt[vt] = 0;
    }
}

int main()
{
    thu(0);
}