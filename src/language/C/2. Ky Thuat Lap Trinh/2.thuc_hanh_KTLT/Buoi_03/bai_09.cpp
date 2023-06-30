/*
Bài 9: Đọc một ma trận các số tự nhiên m x n từ file văn bản “matranin.txt”.
Ghi lại ma trận vừa đọc được vào file văn bản “matranout.txt” đặt tại thư mục bất kỳ. Xuất ra màn hình giá trị của m và n.
*/

#include <bits/stdc++.h>

FILE *file;

char path[100], matran[255];

char a[100];
int sd = 1, sc = 1;

void doc_flie()
{
    printf("\n Nhap duong dan doc file: "); gets(path);
    file = fopen(path, "r");

    if (file == NULL) printf("\n Mo file doc khong thanh cong !");
    else
    {
        int k = 0;
        while (matran[k] != 26) fscanf(file, "%c", &matran[k++]);

        for (int i = 0; i < strlen(matran); i++)
            if (matran[i] == '\n') sd++;
        k = 0;
        while (matran[k] != '\n') if (matran[k++] == ' ') sc++;
        fclose(file);
    }
}

void ghi_flie()
{
    printf("\n Nhap duong dan ghi file: "); gets(path);
    file = fopen(path, "w");

    if (file == NULL) printf("\n Mo file ghi khong thanh cong !");
    else
    {
        fprintf(file, "%s", matran);
        fclose(file);
    }
}

int main()
{
    doc_flie();
    ghi_flie();
    printf("\n So dong n =  %d", sd); 
    printf("\n So cot m =  %d", sc); 
}