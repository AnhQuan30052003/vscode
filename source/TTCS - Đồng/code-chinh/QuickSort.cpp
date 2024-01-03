#include "thu-vien.cpp"

int partition(int a[], int l, int r) {
  int pivot = a[r];   
  int i = l - 1;
  for(int j = l; j < r; j++) {    
    if(a[j] <= pivot) {      
      ++i; 
      int tam = a[i];
      a[i] = a[j];
      a[j] = tam;
    }
  }
  ++i;
  int tam = a[i];
  a[i] = a[r];
  a[r] = tam;
  printf("\nPhân hoạch từ chỉ số %d đến %d\n", l, r);
  for(int i = l; i <= r; i++) {
    printf("%5d", a[i]);
  }
  printf("\n");  
  return i; 
}

void quick_sort(int a[], int l, int r) {
  printf("\nGọi Hàm quick_sort(%d %d): \n", l, r);
  if(l < r) {    
    int pos = partition(a, l, r); 
    printf("\nVị trí của pivot là: %d", pos);      
    quick_sort(a, l, pos-1);     
    quick_sort(a, pos+1, r); 
  }  
}