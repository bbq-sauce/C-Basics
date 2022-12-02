#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionsort(int arr[],int n)
{
  int i,j,min; // min= index of minimum element in the array 
  for(i=0;i<n-1;i++)
    {
      min=i; //find the current minimum element which has not been sorted yet
      for(j=i+1;j<n;i++){
        if(arr[j]<arr[min])
          min=j;

        //next we swap the minimum element with the first element
        if(min!=i){
          swap(&arr[min],&arr[i]);
        }
      }
    }
}
void printArray(int arr[], int n){
  int i;
  for(i=0;i<n;i++){
   std:: cout<<arr[i]<<" ";
  std::cout<<endl;
  }
}
int main() 
{
  int arr[]={34,2,11,1,56,23};
  int n= sizeof(arr)/sizeof(arr[0]);
  selectionsort(arr,n);
  std::cout<<"Sorted Array : \n";
  printArray(arr,n);
  return 0;
}
