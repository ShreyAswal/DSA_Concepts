#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int l = 0; l < n; l++)
    {
        cin >> arr[l];
    }
    int k;
    cin>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    if(k>0 && k<=n){
        cout<< "The " << k << "th smallest element is: " << arr[k - 1] << endl;
    } else {
        cout<<"Invalid value of K";
    }
}
