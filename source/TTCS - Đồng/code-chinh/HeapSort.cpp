#include "thu-vien.cpp"

// In mảng
void _InMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

// Tìm số tầng có thể biểu diễn từ mảng
int TimTang(int n) {
  int tang = 0;
  while (n > 0) {
    n /= 2;
    tang += 1;
  }
  return tang;
}

// Vẽ cây
void VeCay(int a[], int n, int tang) {
  int khoangCach = (pow(2, tang) - 1) / 2;
  // Vẽ gốc
  for (int i = 1; i <= khoangCach; i++) cout << " ";
  cout << a[0] << endl;
  
  // Vẽ tiếp
  int cachDau = khoangCach / 2;
  int _a = 1;
  int soLanLap = 0;
  for (int _tang = 2; _tang <= tang; _tang++) {
    for (int _cachDau = 1; _cachDau <= cachDau; _cachDau++) cout << " ";

    soLanLap = pow(2, _tang) / 2;
    for (int _soLanLap = 1; _soLanLap <= soLanLap; _soLanLap++) {
      cout << a[_a];
      _a += 1;
      if (_a >= n) {
        cout << endl;
        return;
      }
      if (_soLanLap < soLanLap) {
        for (int _khoangCach = 1; _khoangCach <= khoangCach; _khoangCach++) cout << " ";
      }
    }

    cachDau /= 2;
    khoangCach /= 2;
    cout << endl;
  }
}

void heaptify(int a[], int n, int i) {
  int l = 2 * i + 1;
  int r = 2 * i + 2; 
  int largest = i; 
  
  if(l < n && a[l] > a[largest]) { 
    largest = l;
  }
  
  if(r < n && a[r] > a[largest]) {
    largest = r;
  }
  
  if(largest != i) {
    system("cls");
    VeCay(a, n, TimTang(n));
    cout << endl << "Đỗi chỗ " << a[largest] << " va " << a[i];
    getch();
    swap(a[i], a[largest]);    
    heaptify(a, n, largest);
  }
}

void heapsort(int a[], int n) {
  system("cls");
  cout << "Chuyển mảng: ";
  _InMang(a, n);
  cout << endl << "Sang cây nhị phân:" << endl;
  VeCay(a, n, TimTang(n));
  getch();

  for(int i = n/2-1; i >= 0; i--) {
    heaptify(a, n, i);
  }
}

void ThuatToan_HeadSort(int a[], int n) {
  while (n > 1) {
    heapsort(a, n);
    system("cls");
    VeCay(a, n, TimTang(n));

    cout << endl << "Chuyển lại thành mảng: ";
    _InMang(a, n);
    getch();

    cout << endl << "Đổi chỗ vị trí đầu và cuối: ";
    swap(a[0], a[n-1]);
    _InMang(a, n);
    getch();
    if (n - 1 == 1) break;

    cout << endl << "Tiếp tục chạy thuật toán HeapSort với mảng: ";
    n -= 1;
    _InMang(a, n);
    getch();
  }
}