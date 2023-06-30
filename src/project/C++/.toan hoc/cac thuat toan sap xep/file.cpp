// Toàn bộ thuật toán sắp xếp
/*
[+]: Các thuật toán
1. Buble-Sort     - Sắp xếp nổi bọt
2. Selection-Sort - Sắp xếp chọn
3. Insertion-Sort - Sắp xếp chèn
4. Quick-Sort     - Sắp xếp nhanh
5. Merge-Sort     - Sắp xếp trộn
6. Lomuto         - Na ná sắp xếp nhanh
*/

#include <iostream>
using namespace std;

// 1: Bubble-Sort
void BubbleSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    }
}

// 2: Selection-Sort
void Selection(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int vt_min = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[vt_min])
                vt_min = j;
        }
        if (i != vt_min) {
            swap(arr[i], arr[vt_min]);
        }
    }
}

// 3: Insertion-Sort
void InsertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                int x = arr[i];
                for (int k = i; k > j; k--) {
                    arr[k] = arr[k-1];
                }
                arr[j] = x;
                break;
            }
        }
    }
}

// 4. Quick-Sort
void QuickSort(int arr[], int firt, int last) {
    int left = firt, right = last;
    int x = arr[(firt+last)/2];

    while (left <= right) {
        while (arr[left] < x && left < last) left += 1;
        while (arr[right] > x && right > firt) right -= 1;

        if (left <= right) {
            swap(arr[left], arr[right]);
            left += 1;
            right -= 1;
        }
    }
    if (left < last) QuickSort(arr, left, last);
    if (right > firt) QuickSort(arr, firt, right);
}

// 5. Merge-Sort
void MergeSort(int arr[], int firt, int last) {
    int x = (firt+last)/2;
    if (firt < x) MergeSort(arr, firt, x);
    if (x+1 < last) MergeSort(arr, x+1, last);

    int a[100], b[100];
    for (int i = firt; i <= x; i++) {
        a[i] = arr[i];
    }
    a[x+1] = 2000000000;
    for (int i = x+1; i <= last; i++) {
        b[i] = arr[i];
    }
    b[last+1] = 2000000000;

    int i = firt, j = x+1;
    for (int k = firt; k <= last; k++) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i += 1;
        }
        else {
            arr[k] = b[j];
            j += 1;
        }
    }
}

// 6. Lomuto
void Lomuto(int a[], int f, int e) {
    int p = f;
    for (int i = f; i < e; i++) {
        if (a[i] < a[e]) {
            swap(a[i], a[p]);
            p += 1;
        }
    }
    swap(a[p], a[e]);
    if (f < p) Lomuto(a, f, p-1);
    if (p < e) Lomuto(a, p+1, e);
}

int main() {
    system("cls");
    // Mảng ban đầu
    int a[] = {1,5,4,2};
    int n = sizeof(a)/sizeof(int);

    // Câu lệnh sắp xếp
    InsertionSort(a, n);

    // Xuất phần tử
    for (int x : a) {
        cout << x << ' ';
    }
}