#include "thu-vien.cpp"

void merge(int a[], int l, int m, int r) {
  int n1 = m - l + 1, n2 = r - m;
  int x[n1], y[n2];

  for(int i = 0; i < n1; i++) {
    x[i] = a[l+i];    
  }
  
  for(int i = 0; i < n2; i++) {
    y[i] = a[m + i + 1];
  }
  
  int index = l;
  int i = 0, j = 0;
  while(i < n1 && j < n2) {
    if(x[i] <= y[j]) {
      a[index++] = x[i++];
    } else {
      a[index++] = y[j++];
    }
  }
  while(i < n1) {
    a[index++] = x[i++];
  }
  while(j < n2) {
    a[index++] = y[j++];
  }

  printf("\nGọi Hàm Merge(%d %d %d)\n", l, m, r);
  for(int i = l; i <= r; i++) {
    printf("%5d", a[i]);
  }
  printf("\n");
}

void mergeSort(int a[], int l, int r) {
  printf("\nGọi Hàm merge_Sort(%d %d): \n", l, r);
  if(l < r) { 
    int m = (l + r) / 2; 
    mergeSort(a, l, m); 
    mergeSort(a, m+1, r); 
    merge(a, l, m, r);
  }
}
