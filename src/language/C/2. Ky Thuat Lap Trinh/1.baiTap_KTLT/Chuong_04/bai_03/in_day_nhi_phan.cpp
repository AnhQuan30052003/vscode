// Nhap vao mot so nguyen duong n, sau do in day nhi phan co do dai bang n
// Note: lay du lieu n = tu file LINK.inp va in ket qua ra file LKNP.out
#include <bits/stdc++.h>

FILE *file;

char path[100];

int np[100];

int n;

void doc(char path[])
{
    if ( (file = fopen(path, "r") ) == NULL) printf("\n Mo file doc that bai !"); 
    else
    {
        fscanf(file, "%d", &n);
        fclose(file);
    }
}

void kiem_tra()
{
    for (int k = 0; k < n; k++)
        fprintf(file, "%d", np[k]);
    fprintf(file, "%c", '\n');
}

void nhi_phan(int i)
{
    for (int k = 0; k <= 1; k++)
    {
        np[i] = k;
        if (i < n-1) nhi_phan(i+1);
        else kiem_tra();
    }
}

void ghi(char path[])
{
    printf("\n Nhap duong dan ghi ket qua: "); gets(path);
    if ( (file = fopen(path, "w")) == NULL ) printf("\n Mo file ghi that bai !");
    else
    {
        nhi_phan(0);
        fclose(file);
    }
}

int main()
{
    printf("\n Nhap duong dan lay gia tri n: "); gets(path);
    doc(path);
    ghi(path);
}