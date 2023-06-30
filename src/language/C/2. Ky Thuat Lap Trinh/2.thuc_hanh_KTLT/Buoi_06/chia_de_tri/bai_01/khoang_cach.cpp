#include <bits/stdc++.h>

FILE *file;
char path[100] = "toa_do.txt";
int n;
int x[100], y[100];

void doc_file()
{
    file = fopen(path, "r");
    fscanf(file, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &x[i]);
        fscanf(file, "%d", &y[i]);
    }
    fclose(file);
}

float khoang_cach()
{
    float min = sqrt(pow((x[1] - x[0]),2) + pow((y[1] - y[0]),2));
    float kc;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            kc = sqrt(pow((x[j] - x[i]),2) + pow((y[j]- y[i]),2));
            if (kc < min) min = kc;
        }
    return min;
}

int main()
{
    doc_file();
    printf("\n Khoang cach gan nhat la: %g", khoang_cach());
}