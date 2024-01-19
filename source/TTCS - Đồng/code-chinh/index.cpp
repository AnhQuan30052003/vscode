#include "thu-vien.cpp"
#include "giao-dien-va-ham-xu-ly.cpp"
#include "HeapSort.cpp"
#include "QuickSort.cpp"
#include "MergeSort.cpp"

void InMang(int a[], int n) {
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int n = 1, luaChon = 0;
  int a[n];

  while (true) {
    HienThiGiaoDienLucDau(luaChon);
    if (luaChon == 5) break;

    // Xử lý
    switch (luaChon) {
      case 1: {
        QuickSort(a, 0, n - 1);
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

      case 4: {
        NhapMang(a, n);
        cout << "Nhập thành công mảng" << endl;
      }
    }
    getch();
  }

  return 0;
}