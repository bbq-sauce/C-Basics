#include <iostream>
int main() {
 int arr[5];
    arr[0] = 5;
    arr[2] = -10;
  
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];
  
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];
  std::cout<<"__________Traverse Array____________";
  
  // way 1
  int barr[5]={1,2,3,4,5};
  int i;
  for(i=0;i<5;i++){
    std::cout<<barr[i]<<" ";
  }

  //way 2
  
  std::cout<<"other method";
  for(i=0;i<5;i++){
    std::cout<<i[barr]<<" ";
  }
  
    return 0;
}
