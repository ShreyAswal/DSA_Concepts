// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[n] = {0,10,8,6,4,2};
    
    n=n+1;
    arr[n] = 20;
    int el = arr[n];
    int i=n;
    // cout<<i/2<<" : ";
    while(i > 1 && el > arr[i/2]){
        cout<<i<<" : "<<arr[i]<<endl;
        arr[i] = arr[i/2];
        i=i/2;
    }
    arr[i] = el;
    
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}