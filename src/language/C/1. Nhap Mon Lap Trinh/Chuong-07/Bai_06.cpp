//Viết chương trình nhập vào một chuỗi, sau đó loại bỏ những khoảng trắng thừa trong chuỗi.
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    int first = 0;
    int last = strlen(s)-1;
    while (first < last && s[first] == ' ')
        first++;
    while (last > first && s[last] == ' ')
        last--;

    printf("-> Chuoi hoan thien: ");
    for (int i=first; i<=last; i++)
        printf("%c", s[i]);
}