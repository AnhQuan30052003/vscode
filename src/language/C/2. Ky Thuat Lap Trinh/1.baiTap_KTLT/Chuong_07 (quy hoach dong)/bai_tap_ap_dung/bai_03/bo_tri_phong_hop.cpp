#include <bits/stdc++.h>
using namespace std;

int a[]= {0,6,10};
int b[]= {0,10,15};
int n = sizeof(a)/sizeof(a[0]) - 1;
int L[50];
int cs[50];

void bai_toan_co_so()
{
	for (int i = 1; i <= n; i++) L[i] = 1;
}

void sap_xep()
{
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
}

void truy_hoi()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (b[j] <= a[i] && j < i)
				L[i] = L[j] + 1;
}

int main()
{
	sap_xep();
	bai_toan_co_so();
	truy_hoi();
	cout << "\nSo cuoc hop nhieu nhat: " << L[n];
}