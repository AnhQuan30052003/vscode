#include "thu-vien.cpp"

int Partition(int a[], int l, int r) {
  int pivot = a[r];   
  int i = l - 1;
  for(int j = l; j < r; j++) {    
    if(a[j] <= pivot) {      
      ++i; 
      swap(a[i], a[j]);
    }
  }
  ++i;
  swap(a[i], a[r]);

  return i; 
}

void QuickSort(int a[], int l, int r) {
  if(l < r) {    
    int pos = Partition(a, l, r); 
    QuickSort(a, l, pos-1);     
    QuickSort(a, pos+1, r); 
  }  
}