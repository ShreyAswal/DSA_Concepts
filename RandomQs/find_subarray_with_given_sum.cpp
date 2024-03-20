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
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        int currsum = arr[i];
        if(currsum == sum){
            cout<< "Sum found at indexes " << i << endl;
        } else {
            for(int j=i+1;j<n;j++){
                if(currsum + arr[j] == sum){
                    cout<<"Sum found at indexes " << i << " and " << j<< endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No subarray found";
    return 0;
}