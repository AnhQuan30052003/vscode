#include <bits/stdc++.h>

struct threeNum
{ int n1, n2, n3; };

int main()
{
    int n;
    threeNum num;
    FILE *fptr;

    fptr = fopen("quan.inp", "rb");

    if (fptr == NULL)
    {
        printf("\n Mo file that bai !");
        exit(1);                                                    // Thoat neu gap loi
    }
    for (n = 1; n < 5; n++)
    {
        fread(&num, sizeof(threeNum), 1, fptr);                     // Hien thi toan file
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }

    // Doc va hien ti phan tu dau tien
    fseek(fptr, 0, SEEK_SET);
    fread(&num, sizeof(threeNum), 1, fptr);
    printf("\n Phan tu dau tien:\n");
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);

    // Doc va hien ti phan tu thu ba
    int size = sizeof(threeNum);
    fseek(fptr, 2*size, SEEK_SET);
    fread(&num, size, 1, fptr);
    printf("\n Phan tu thu ba:\n");
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    fclose(fptr);
}