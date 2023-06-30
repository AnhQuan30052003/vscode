#include <bits/stdc++.h>

FILE *file;
char path[10] = "chuoi.inp";
char chuoi[32];
char mt[32][32];
int n;
int dem = 1;

// Gia do bien doi
int tx[2] {0,1};
int ty[2] {1,0};

void doc_file()
{
    file = fopen(path, "r");
    if (file == NULL) printf("\n Mo file khong thanh cong !");
    else 
    {
        fgets(chuoi, 256, file);
        printf("\n Chuoi doc la: %s", chuoi);
        fclose(file);
    }
}

void tao_ma_tran()
{
    for (int d = 0; d < n; d++)
        for (int c = 0; c < n-d; c++)
            mt[d][c] = chuoi[d+c];

    for (int d = 0; d < n; d++)
    {
        printf("\n");
        for (int c = 0; c < n-d; c++)
            printf("%2c", mt[d][c]);
    }
    printf("\n");
}

void kiem_tra()
{
    printf("\n Cach %d:\n", dem++);
    mt[0][0] = 'x';
    for (int d = 0; d < n; d++)
    {
        for (int c = 0; c < n-d; c++)
            printf("%2c", mt[d][c]);
        printf("\n");
    }
}

void thu(int x, int y, int dai)
{
    for (int i = 0; i <= 1; i++)
    {
        x = x + tx[i];
        y = y + ty[i];
        char c = mt[x][y];
        mt[x][y] = 'x';
        if (dai == n) kiem_tra();
        else thu(x, y, dai+1);
        mt[x][y] = c;
        x = x - tx[i];
        y = y - ty[i];
    }
}
int main()
{
    doc_file();
    n = strlen(chuoi);
    tao_ma_tran();
    thu(0,0,2);
}