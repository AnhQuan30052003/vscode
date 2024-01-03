#include "thu-vien.cpp"
#include "giao-dien-va-ham-xu-ly.cpp"
#include "HeapSort.cpp"
#include "QuickSort.cpp"
#include "MergeSort.cpp"

// Biến điều chỉnh
int luaChon = 0;

void InMang(int a[], int n) {
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  system("cls");
  int n;
  cout << "Nhập vào kích thước mảng: ";
  cin >> n;

  int a[n];
  cout << "Nhập vào các phần tử mảng: ";
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  while (true) {
    HienThiGiaoDienLucDau(luaChon);
    if (luaChon == 0) break;
    // Xử lý
    switch (luaChon) {
      case 1: {
        quick_sort(a, 0, n - 1);
        cout << "Mảng đã sắp xếp bằng Quick Sort: ";
        InMang(a, n);
        break;
      }

      case 2: {
        ThuatToan_HeadSort(a, n);
        cout << endl << "Mảng sau khi sắp xếp bằng thuật toán HeapSort: ";
        InMang(a, n);
        break;
      }

      case 3: {
        mergeSort(a, 0, n - 1);
        cout << "Mảng đã sắp xếp bằng Merge Sort: ";
        InMang(a, n);
        break;
      }
    }
    getch();
  }

  return 0;
}