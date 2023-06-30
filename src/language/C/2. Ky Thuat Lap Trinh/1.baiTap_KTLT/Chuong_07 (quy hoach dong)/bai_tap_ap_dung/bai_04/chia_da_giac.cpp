#include <bits/stdc++.h>
using namespace std;

int n;
int F[50][50];

void bai_toan_co_so()
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j < i+3) F[i][j] = 0;
		}
	}
}

int main()
{

}