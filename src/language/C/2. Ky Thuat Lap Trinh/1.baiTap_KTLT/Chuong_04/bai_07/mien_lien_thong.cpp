/*
Cho mot file chưa ma tran mxn gom cac gia tri 0 or 1,
hay xac dinh mien lien thong roi danh dau cac mieng theo so thu tu roi in ra ban do mot file khac

Huong dan: Ap dung nguyen tat hinh dau cong
*/
#include <bits/stdc++.h>

FILE *file;
char path[100];

int m, n;
int mt[50][50];

void doc_file()
{
    printf("\n Nhap duong dan: "); gets(path);
    file = fopen(path, "r");
    if (file == NULL) printf("\n Mo file khong thanh cong !");
    else
    {
        fscanf(file, "%d", &n);
        fscanf(file, "%d", &m);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                fscanf(file, "%d", &mt[i][j]);
        fclose(file);
    }
}

void thu(int x, int y)
{
    if (mt[x][y] == 1)
    {
        mt[x][y] = 2;
        thu(x+1,y); // nhich xuong
        thu(x-1,y); // nhich len 
        thu(x,y+1); // nhich sang phai
        thu(x,y-1); // nhich sang trai
    }
}

int main()
{
    doc_file();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (mt[i][j] == 1) thu(i,j);
            
    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int j = 1; j <= m; j++)
            if (mt[i][j] != 0) printf(" x");
            else printf("%2d", mt[i][j]);
    }
}