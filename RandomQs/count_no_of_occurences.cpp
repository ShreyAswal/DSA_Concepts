#include <iostream>
using namespace std;

int main() {
     int n;
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++){
        cin>>arr[l];
    }
    int num;
    cin>>num;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            count++;
        }
    }
    cout<<count;
    return 0;
}