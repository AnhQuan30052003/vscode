// Code da duoc chinh sau va chay duoc
#include <bits/stdc++.h>

int n = 5;
int x, y;
int dem = 1;

int mt[7][7]
{
    0,0,0,0,0,0,0,
    0,1,1,1,1,1,0,
    0,0,0,1,0,0,0,
    0,1,1,1,1,1,0,
    0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,
};

int tx[4] {0,1,0,-1};
int ty[4] {1,0,-1,0};

void kiem_tra()
{
    printf("\n Cach %d:\n", dem++); 
    for (int dong = 1; dong <= n; dong++)
    {
        for (int cot = 1; cot <= n; cot++)
            if (mt[dong][cot] == 2) printf(" x");
            else printf("%2d", 0);
        printf("\n");
    }
}

void thu(int vt)
{
    int p, q;
    for (int i = 0; i < 4; i++)
    {
        p = x + tx[i];
        q = y + ty[i];
        if (mt[p][q] == 1)
        {
            x = p;
            y = q;
            mt[p][q] = 2;
            if (y != n) thu(vt+1);
            else kiem_tra();
            mt[p][q] = 1;
            x = x - tx[i];
            y = y - ty[i];
        }
    }
}

int main()
{
    for (int d = 1; d <= n; d++)
        if (mt[d][1] == 1)
        {
            x = d;
            y = 1;
            mt[d][1] = 2;
            thu(1);
            mt[d][1] = 1;
        }
}