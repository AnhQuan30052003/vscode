#include <bits/stdc++.h>

struct threeNum
{ int n1, n2, n3; };

char path[100];

int main()
{
    int n;
    threeNum num;
    FILE *fptr;

    printf("\n Nhap duong dan: "); gets(path);
    fptr = fopen(path, "wb");

    if (fptr == NULL)
    {
        printf("\n Mo file that bai !");
        exit(1);
    }
    for (n = 1; n < 5; n++)
    {
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n+1;
        fwrite(&num, sizeof(threeNum), 1, fptr);
    }
    fclose(fptr);
}