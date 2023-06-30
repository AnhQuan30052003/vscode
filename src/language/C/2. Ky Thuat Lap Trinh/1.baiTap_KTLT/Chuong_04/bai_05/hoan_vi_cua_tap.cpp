#include <bits/stdc++.h>
#define max 50

FILE *file;

int su_dung[max], hv[max], a[max];
int n;
char path[100];

void doc_file(char path[])
{
    printf("\n Nhap duong dan doc file: "); gets(path);
    if ( (file = fopen(path, "r")) == NULL) printf("\n Mo file khong thanh cong !");
    else
    {
        fscanf(file, "%d", &n);
        for (int i = 0; i < n; i++) fscanf(file, "%d", &a[i]);
        fclose(file);
    }
}

void kiem_tra()
{
    for (int i = 0; i < n; i++)
        fprintf(file, "%3d", hv[i]);
    fprintf(file, "%c", '\n');
}

void thu(int vt)
{
    for (int i = 0; i < n; i++)
    {
        if (su_dung[i] == 0)
        {
            hv[vt] = a[i];
            su_dung[i] = 1;
            if (vt < n-1) thu(vt+1);
            else kiem_tra();
            su_dung[i] = 0;
        }
    }
}

void ghi_file(char path[])
{
    printf("\n Nhap duong dan ghi ket qua: "); gets(path);
    if ( (file = fopen(path, "w")) == NULL) printf("\n Mo file khong thanh cong !");
    else
    {
        thu(0);
        fclose(file);
    }
}

int main()
{
    doc_file(path);
    ghi_file(path);
}