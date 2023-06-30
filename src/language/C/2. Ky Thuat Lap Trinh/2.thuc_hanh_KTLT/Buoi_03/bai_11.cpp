/*
Bài 11: Cho dãy (a1, a2,…,aN), hày tìm đoạn con tăng dần có tổng lớn nhất.
a.	Dữ liệu: được cho trong tập tin INPUT. Txt
-	Dòng 1 chứa số tự nhiên N (0 < N <= 1000)
-	N dòng tiếp theo, mỗi dòng chứa một số là các số của dãy đã cho theo đúng thứ tự. Mỗi số không vượt quá 30000.
b.	Kết quả tìm được ghi vào gile OUTPUT.txt gồm 2 dòng:
-	Dòng 1 ghi tổng của dãy con.
-	Dòng 2 ghi mảng con tang dần có tổng lớn nhất.
*/

//vd: [1 2 3 1 3]

#include <bits/stdc++.h> 

FILE *file;

char path[100];

int n, max;
int a[100];
int trang_thai[100];
int gia_tri[100];

void doc_file()
{
    printf("\n Nhap duong dan doc file: "); gets(path);
    file = fopen(path, "r");

    if (file == NULL) printf("\n Mo file doc khong thanh cong !");
    else
    {
        fscanf(file, "%d", &n);
        for (int i = 0; i < n; i++) fscanf(file, "%d", &a[i]);
        fclose(file);
    }
}

int max_tong()
{
    int s;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += a[j];
            if (a[j] >= a[j+1])
            {
                gia_tri[i] = s;
                break;
            }
        }   
    }

    int max = gia_tri[0];
    for (int i = 1; i < n; i++)
        if (gia_tri[i] > max) max = gia_tri[i];
    return max;
}

void in_tong_max()
{
    int s;
    max = max_tong();
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n-1; j++)
        {
            s += a[j];
            if (a[j] > a[j+1])
            {
                if (s == max)
                {
                    fprintf(file, "%3d\n", max);
                    for (int k = i; k <= j; k++)
                        fprintf(file, "%3d", a[k]);
                    break;
                }
            }
        }
    }
}

void ghi_file()
{
    printf("\n Nhap duong dan ghi file: "); gets(path);
    file = fopen(path, "w");

    if (file == NULL) printf("\n Mo file ghi khong thanh cong !");
    else
    {
        in_tong_max();
        fclose(file);
    }
}

int main()
{
    doc_file();
    ghi_file();
}