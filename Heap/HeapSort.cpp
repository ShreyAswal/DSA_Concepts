#include <iostream>
#include <vector>

using namespace std;

void InsertInHeap(int arr[], int n)
{
    cout << "n: " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int i=n,temp = arr[n];
    while(i > 1 && temp > arr[i/2]){
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;


    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void DeleteInHeap(int arr[], int n)
{
    int x = arr[1];
    // int end = arr[n];
    arr[1] = arr[n];
    arr[n] = x;
    int i = 1, j = i * 2;
    cout << "n: " << n << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    while (j <= n - 1)
    {
        // cout<<n<<" :: "<<arr[i]<<" : "<<arr[j]<<endl;
        if (j + 1 <= n - 1 && arr[j + 1] > arr[j])
        {
            // cout<<"I'm in 1st loop"<<endl;
            j++;
        }
        if (arr[j] > arr[i])
        {
            // cout<<"I'm in 2nd loop. i,j = "<<arr[i]<<" : "<<arr[j]<<endl;
            swap(arr[i], arr[j]);
            i = j;
            j = j * 2;
        }
        else
            break;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int main()
{
    int n;
    cin>>n;
    int arr[n+1] = {0};
    // arr[1] = 10;

    for (int i = 1; i <= n; i++)
    {
        int el;
        cin>>el;
        arr[i] = el;
        InsertInHeap(arr, i);
    }
    cout << endl;
    // int n = arr.size();
    for(int i=n;i>=1;i--){
        DeleteInHeap(arr,i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}