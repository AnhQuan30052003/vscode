#include <bits/stdc++.h>

int a[] = {1,34,2,5,6,10};
int n = sizeof(a)/sizeof(a[0]);
int v = 22;
int b[50];

void sx()
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[j] > a[i])
            {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
}

void bo_soi()
{
    int s = 0, i = 0;
    for (int i = 0; i < n; i++)
    {
        if (s + a[i] <= v)
        {
            b[i] = 1;
            s = s + a[i];
        }
    }
    printf("\n Tong the tich cac vien soi: %d", s);

    printf("\n Cac vien soi bo: ");
    for (int i = 0; i < n; i++)
        if (b[i] == 1) printf("%2d", a[i]);
}

int main()
{
    sx();
    bo_soi();
}
