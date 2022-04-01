#include<iostream>
using namespace std;
   



int main(){
    int n;
    int maxn=INT_MIN;
    int minn=INT_MAX;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    // for (int i=0;i<n;i++){
        // cout<<"Enter "<<i+1<<"th element: ";
        // cin>>arr[i];
        // maxn=max(maxn,arr[i]);
    // cout<<"max at "<<i<<" is "<<maxn<<endl;
    // }
    for(int i=0;i<n;i++){
        cout<<"\nEnter "<<i+1<<"th element: ";
        cin>>arr[i];
        }
        cout<<"The array is: ";
    for (int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    for (int i=0;i<n;i++){
        if(arr[i]>=maxn){
            maxn=arr[i];
        }
        cout<<"Current maximum is: "<<maxn<<endl;

    }
    cout<<"The maximum of given array is "<<maxn<<endl;
return 0;
}






