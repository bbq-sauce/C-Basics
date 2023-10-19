#include <iostream>
using namespace std;


int binsearch(int arr[],int n){
  
  int i,j;
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
      if(arr[j]>arr[j+1])
      {swap(arr[j],arr[j+1]);}
  return -1;
}


void printarray(int ar[],int n){
  for(int i=0;i<n;i++)
    std::cout<<ar[i]<<" ";

  std::cout<<endl;
}
int main() {
  std::cout << "Hello World!\n";
  int arr[]={4,2,6,1,3};
  int n = sizeof(arr)/sizeof(arr[0]);

  binsearch(arr,  n);
  std::cout<<"sorted array:"<<endl;
  printarray(arr,  n);
  return 0;
  
}
