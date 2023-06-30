//Bài 6: Viết chương trình hiển thị các điểm yên ngựa trong 1 ma trận n x m các số thực cho trước. (Điểm yên ngựa là điểm lớn nhất trên dòng, nhỏ nhất trên cột chứa nó)
#include <bits/stdc++.h>

float a[3][3]
{
    1,2,3,
    4,5,6,
    7,8,9
};

float yen_ngua(float a[3][3])
{
    float max_dong;
    int cot, dem;
    for (int i = 0; i < 3; i++)             // code theo dong
    {
        dem = 0;
        max_dong = a[i][0];
        for (int j = 1; j < 3; j++)         // code theo cot
            if (a[i][j] > max_dong)
            {
                max_dong = a[i][j];
                cot = j;
            }
        for (int i = 0; i < 3; i++)         // Tiep tuc chay theo dong
            if (a[i][cot] > max_dong) dem++;
        if (dem == 2) return max_dong;
    }
    return 0;
}

int main()
{
    printf("\n Diem yen ngau trong ma tran la: %g", yen_ngua(a));
}