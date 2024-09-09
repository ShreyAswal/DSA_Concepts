#include <iostream>
#include <vector>

using namespace std;

void InsertInHeap(int arr[],int n){
    // cout<<n<<" : "<<el<<endl;
    // n = n+1;
    int i=n;
    int temp = arr[i];

    // Placing the new value at arr[n] at correct position
    while (i >1 && temp > arr[i/2]){
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;

    // for(int i=1;i<n+1;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
};

void DeleteInHeap(int arr[],int n){
    cout<<"n: "<<n<<endl;
    for(int i=1;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x = arr[1];
    // int last = arr[n];
    arr[1] = arr[n];
    arr[n] = x;
    cout<<"First and last: "<<arr[1]<<" : "<<arr[n]<<endl;

    int i=1,j=i*2;
    while(j < n-1){
        if(arr[j+1] > arr[j]){
            j = j+1;
        }
        if(arr[i] < arr[j]){
            swap(arr[i],arr[j]);
            i = j;
            j = j*2;
        } else {
            break;
        }
    }
    // return x;
};


int main(){
    // int n=1;
    int arr[] = {0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++){
        InsertInHeap(arr,i);
    }
    // arr[1] = 10;
    // int m;
    // cin>>m;
    // for(int i=0;i<m;i++){
    //     int el;
    //     cin>>el;
    //     n+=1;
    //     InsertInHeap(n,arr,el);
    // }

    for(int i=1;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // int n = arr.size();
    DeleteInHeap(arr,7);
    DeleteInHeap(arr,6);
    DeleteInHeap(arr,5);
    // DeleteInHeap(arr,4);
    // DeleteInHeap(arr,3);
    // DeleteInHeap(arr,2);
    // // n-=1;
    // cout<<endl<<"Deleted Element: "<<deletedElement<<endl;
    // cout<<"arr size:"<<n<<endl;
    for(int i=1;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    // DeleteInHeap(arr,n);
    return 0;
}
