/*
Bài 8: Anh Bo có một số tiền là n đồng. Anh định đem n đồng này gửi ngân hàng với lãi suất 10% một năm.
Cứ sau mỗi năm anh sẽ ra ngân hàng rút tiền lãi rồi nhập chung với tiền gốc để gửi lại cho năm sau
(nếu tiền lãi là số thập phân lẻ thì sẽ được làm tròn đến hàng đơn vị, nghĩa là từ 0.5 trở lên thì làm tròn lên 1; dưới 0.5 thì làm tròn về 0).
Anh dự định khi nào đủ số tiền m đồng thì sẽ rút toàn bộ để đi mua bò. Hỏi sau mấy năm thì anh Bo sẽ có đủ tiền mua bò?
*/
#include <stdio.h> 
#include <math.h>

int main()
{
    int nam = 100;
    double tien_gui, tien_du_dinh, lai, tien = 0, r = 0.1;

    printf("\n Nhap so tien gui: "); scanf("%lf", &tien_gui);
    printf(" Nhap so tien du dinh: "); scanf("%lf", &tien_du_dinh);

    for (int i = 1; i <= nam; i++)
    {
        lai = tien_gui*r;
        tien_gui += round(lai);

        if (tien_gui >= tien_du_dinh)
        {
            printf("\n Vay sau %d nam thi anh Bo se co du tien mua bo", i);
            break;
        }
    }
}