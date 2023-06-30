/* Bài 4: THIDAU - Kế hoạch thi đấu
Bạn Nam là một vận động viên quần vợt chuyên nghiệp. Trong hệ thống thi đấu quần vợt, mỗi năm người ta tổ chức n giải đấu đánh số từ 1 đến n.
Giải đấu thứ i được tổ chức vào ngày ai và mỗi vận động viên tham gia được khoản tiền thưởng là bi.
Tuy nhiên để đảm bảo sức khỏe cho Nam, huấn luyện viên quyết định hai giải đấu mà Nam chọn tham dự phải cách xa nhau ít nhất là k ngày ( |ai - aj| ≥ k).
Bạn hãy giúp Nam chọn lựa các giải thi đấu sao cho tổng số tiền thưởng là nhiều nhất.
*/
# include <bits/stdc++.h>
using namespace std;

fstream file;
int so_ngay, thoi_gian_nghi;
int ngay_thi[50], tien_thuong[50];
int tien_kiem_duoc[50];
int tien_max = 0;

void du_lieu_tran_dau()
{
    file.open("thong_tin.inp", ios::in);
    file >> so_ngay >> thoi_gian_nghi;
    for (int i = 1; i <= so_ngay; i++) file >> ngay_thi[i];
    for (int i = 1; i <= so_ngay; i++) file >> tien_thuong[i];
    file.close();
}

void lich_thi_dau()
{
    for (int i = 1; i <= so_ngay; i++)
    {
        tien_kiem_duoc[i] = tien_thuong[i];
        for (int j = 1; j < i; j++)
            if (ngay_thi[i] - ngay_thi[j] < thoi_gian_nghi) break;
            else tien_kiem_duoc[i] = tien_kiem_duoc[j] + tien_thuong[i];
        tien_max = max(tien_max, tien_kiem_duoc[i]);
    }
}

int main()
{
    du_lieu_tran_dau();
    lich_thi_dau();
    cout << "\n So tien nhieu nhat Nam thi dau nhan duoc la: " << tien_max;
}