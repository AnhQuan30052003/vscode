/*
Bài 8: Bạn Nam mất trật tự trong giờ học thể dục nên bị thầy giáo phạt.
Hình phạt của thầy như sau: bạn Nam đứng nghiêm, khi thầy hô "trái" thì Nam bước sang trái một mét, thầy hô "phải" thì Nam bước sang phải một mét.
Hỏi sau n lần thầy hô như vậy thì bạn Nam cách xa vị trí ban đầu bao nhiêu mét?
*/
#include <bits/stdc++.h>

int lenh[100];
int n;

void nhap_lenh()
{
    do { printf("\n n = "); scanf("%d", &n); }
    while (!(n >= 1 && n <= 100));

    for (int i = 0; i < n; i++)
        scanf("%d", &lenh[i]); 
}

int phat(int i, int met)
{
    if (i == n) return met;
    else if (lenh[i] == 1) return phat(i+1, met-1);
    else return phat(i+1, met+1);
}

int main()
{
    nhap_lenh();
    printf("\n Sau %d la ho thi Nam cach vi tri ban dau %d met", n, abs(phat(0,0)));
}