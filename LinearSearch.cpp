#include <iostream>
using namespace std;

int Linearsearch(int arr[],int x,int n){
  int i;
  for(i=0;i<n;i++){
    {if(arr[i]==x)
      return i;}}

  return -1;
  }


int main() {
  int arr[]={1,2,3,4,5};
  int x= 4;
  int n= sizeof(arr)/sizeof(arr[0]);

  int result=Linearsearch(arr, x, n);
  (result ==-1)?std::cout<<"not present":std::cout<<"present at index"<<result;

}
