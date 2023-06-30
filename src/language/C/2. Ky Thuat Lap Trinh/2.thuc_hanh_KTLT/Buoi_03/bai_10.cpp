//Bài 10: Viết chương trình đếm số từ trong một file văn bản.
#include <bits/stdc++.h>

FILE *file;

char path[100];
char ghi[2000];

void doc_file(char path[])
{
    int i = 0;
    while (ghi[i] != 26) fscanf(file, "%c", &ghi[i++]);
}

void dem_tu()
{
    int dem = 0;
    if (ghi[0] != ' ') dem = 1;
    for (int i = 0; i < strlen(ghi); i++)
        if ((ghi[i] == ' ' || ghi[i] == '\n') && ghi[i+1] != ' ') dem++;
    printf("\n-> Trong file co %d tu", dem);
}

int main()
{
    printf("\n Nhap duong dan: "); gets(path);

    file = fopen(path,"r");
    if (file == NULL) printf("\n Mo file khong thanh cong !");
    else
    {
        doc_file(path);
        dem_tu();
        fclose(file);
    }
}