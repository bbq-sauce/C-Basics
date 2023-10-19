//code to get the running sum of elements in an array.
//eg- input: 1 2 3 4
//output: 1 3 6 10 
#include <iostream>
using namespace std;

void runningsum(int arr[],int n)
{
    int temp= arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i]=temp+arr[i];
        temp = arr[i];
    }
}

int main()
{
    int arr[5];
    
    //enter array
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        
    }
    runningsum(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
