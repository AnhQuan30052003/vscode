/*
Bài 7: Có một khu vườn hình chữ nhật kích thước n x m ô vuông (n dòng, m cột).
Ta đánh số các dòng từ 1 đến n theo chiều từ trên xuống dưới, các cột từ 1 đến m theo chiều từ trái qua phải.
Tại những ô vuông là đất bình thường người ta trồng rau. Tuy nhiên có một số ô là đá nên không trồng rau được.
Có một chú ốc sên tại ô (y, x), y là vị trí dòng, x là vị trí cột. Từ một ô, chú ốc sên chỉ có thể di chuyển sang 4 ô liền kề (y-1, x), (y+1, x), (y, x-1), (y, x+1).
Nếu gặp ô đá thì ốc sên không đi vào được.
Quy ước: 
0: là rau
1: là đá
*/
#include <bits/stdc++.h>

int n = 5;
int dem_rau;
int luu_rau[10], k = 0;

int kv[7][7] = 
{
    1,1,1,1,1,1,1,
    1,0,1,0,1,0,1,
    1,0,1,0,1,0,1,
    1,1,0,0,1,0,1,
    1,0,0,0,1,0,1,
    1,0,1,0,1,1,1,
    1,1,1,1,1,1,1,
};

void thu(int x, int y)
{
    if (kv[x][y] == 0)
    {
        kv[x][y] = 2;
        dem_rau += 1;
        thu(x,y+1);
        thu(x,y-1);
        thu(x+1,y);
        thu(x-1,y);
    }
}

int max()
{
    int max = luu_rau[0];
    for (int i = 1; i < k; k++)
        if (luu_rau[i] > max) max = luu_rau[i];
    return max;
}

int main()
{
    for (int d = 1; d <=n; d++)
        for (int c = 1; c <= n; c++)
            if (kv[d][c] == 0)
            {
                dem_rau = 0;
                thu(d,c);
                luu_rau[k++] = dem_rau;
            }
    printf("\n Oc Sen co the an duoc nhieu nhat %d bo rau", max());
}