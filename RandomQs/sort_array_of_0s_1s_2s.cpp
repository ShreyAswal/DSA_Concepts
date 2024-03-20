#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++){
        cin>>arr[l];
    }
    int low=0,mid=0,high=n-1;
    for(int i=0;i<n;i++){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1){
            mid++;
        } else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

      for(int l=0;l<n;l++){
        cout<<arr[l];
    }


}