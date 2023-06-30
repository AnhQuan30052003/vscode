/* Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an.
Một viên gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng nhiều hơn thì viên gạch đó bị vỡ.
Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu? */
#include <bits/stdc++.h>
using namespace std;

int gach[] = {1,1,1,1};
int n = sizeof(gach)/sizeof(gach[0]);

int dem_tang()
{
    sort(gach, gach+n);
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (gach[i] >= dem) dem++;
    return dem;
}

int main()
{
    cout << "\n So tang cao nhat: " << dem_tang();
}