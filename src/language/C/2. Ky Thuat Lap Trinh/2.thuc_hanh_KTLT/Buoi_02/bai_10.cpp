/*
Bài 10: Bạn Nam mất trật tự trong giờ học thể dục nên bị thầy giáo phạt.
Hình phạt của thầy như sau: bạn Nam đứng nghiêm, khi thầy hô "trái" thì Nam bước sang trái một mét, thầy hô "phải" thì Nam bước sang phải một mét.
Hỏi sau n lần thầy hô như vậy thì bạn Nam cách xa vị trí ban đầu bao nhiêu mét?
Dữ liệu nhập:
- Dòng thứ nhất là số n (1 ≤ n ≤ 100).
- Dòng tiếp theo gồm n số 1 hoặc 2, mỗi số cách nhau một khoảng trắng. Nếu là số 1 thì thầy giáo hô "trái", nếu là số 2 thì thầy giáo hô "phải".
Dữ liệu xuất:
- Là khoảng cách của Nam sau n lần hô so với vị trí ban đầu.
*/
#include <bits/stdc++.h>

char lenh[20];

inline int ktra_lenh(char lenh[20])
{
    for (int i = 0; i < strlen(lenh); i++)
    
        if (lenh[i] != '1' && lenh[i] != '2') return false;
    return true;
}

inline void tinh_toan(char lenh[20])
{
    int dem_trai = 0, dem_phai = 0;
    for (int i = 0; i < strlen(lenh); i++)
    {
        if (lenh[i] == '1') dem_trai++;
        else dem_phai++;
    }

    if (dem_trai == dem_phai) printf("-> Nam quay ve vi tri cu");
    else if (dem_trai > dem_phai) printf("-> Nam cach xa vi tri ban dau %d met ve ben trai", dem_trai-dem_phai);
    else printf("-> Nam cach vi tri ban dau %d met ve ben phai", dem_phai-dem_trai);
}

int main()
{
    printf("\n Lenh di chuyen bao gom: (1) la \"trai\"; (2) la \"phai\".");
    printf("\n Moi nhap day lenh: "); gets(lenh);

    if (ktra_lenh(lenh) == false) printf(" Co lenh nhap khong chinh xac !");
    else tinh_toan(lenh);
}