#include <iostream>
using namespace std;
//swap function
void swap(int *a,int *b){
  int t= *a;
  *a=*b;
  *b=t;
}
//print function
void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  
  }
  cout<<endl;
}


// function to find the partition point to rearrange array
int partition(int arr[], int l, int h){
  int pivot = arr[h]; //we select lasst elemtn as pivot point
  int i=l-1;// second pointer for greater elemtn
  
  //next, we traverse each element of array and check if its greater or less than pivot
  for(int j= l;j<h;j++){
    if(arr[j]<= pivot){
      i++;
      // if elemtn in less that pivot swap it with the greater element pointed by i
      //swap element at i with element at j
      swap(&arr[i], &arr[j]);
    }
  }
  // swap pivot with the greater element at i
  swap(&arr[i+1],&arr[h]);
  //return the partition point
  return (i+1);
}

void quicksort(int arr[],int l,int h){
  if(l<h){
    int pi= partition(arr,  l,  h);
    quicksort(arr, l, pi-1);
    quicksort(arr, pi+1, h);
  }
}
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quicksort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}
