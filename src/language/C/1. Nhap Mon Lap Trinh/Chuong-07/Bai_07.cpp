/*Viết chương trình nhập vào một chuỗi (hai từ chỉ cách một khoảng trắng):
a. Đếm số từ có trong chuỗi.
b. In ra từ đầu tiên.
c. In ra từ cuối cùng.
d. In ra các từ trong chuỗi, mỗi từ nằm trên một dòng.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h> 

void demSoTu (char s[]);
void tuDauTien (char s[]);
void tuCuoicung (char s[]);
void inTuTrenDong (char s[]);

int main()
{
	char s[255];
	printf("\nNhap chuoi: "); gets(s);
	demSoTu (s); getch();
	tuDauTien (s); getch();
	tuCuoicung (s); getch();
	inTuTrenDong (s); getch();
}

void demSoTu (char s[])
{
    int i = 0, j = 0, dem = 0;;
    if (s[i] != ' ')
		dem = 1;
    while (i<strlen(s) && s[i++] == ' ')
        j++;
    for (int i=j; i<strlen(s); i++)
    {
        if (s[i-1] == ' ' && s[i] != ' ')
            dem++;
    }
	printf("\n-> Chuoi co %d tu", dem);
}
void tuDauTien (char s[])
{
	printf("\n-> Tu dau tien: ");
	int i = 0, j = 0;
	while (i<strlen(s) && s[i++] == ' ')
		j++;
	for (int i=j; i<strlen(s); i++)
		{
			if (s[i] != ' ')
				printf("%c", s[i]);
			else
				break;
		}
}
void tuCuoicung (char s[])
{
	char c[255];
	int i, j, k = 0;

	i = j = strlen(s)-1;
	while (i>=0 && s[i--] == ' ')
		j--;
	for (int i=j; i>=0; i--)
		{
			if (s[i] != ' ')
				c[k++] = s[i];
			else
				break;
		}
	printf("\n-> Tu cuoi cung: %s", strrev(c));
}
void inTuTrenDong (char s[])
{
	printf("\n-> Bieu dien moi tu tren 1 dong:\n"); getch();
	int i = 0, j = 0;
	while (i<strlen(s) && s[i++] == ' ')
		j++;
	for (int i=j; i<strlen(s); i++)
	{
		if (s[i] != ' ')
			printf("%c", s[i]);
		else if (s[i] == ' ' && s[i+1] != ' ')
			printf("\n");
	}
}