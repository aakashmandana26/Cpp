#include <iostream>
using namespace std;

// Program to find the no of triplets 
// example:
// n = 60
// m = size of array = 7
// int arr[]= array of 7 numbers= [2,3,4,5,6,10,12]
// Therefore number of triplets = 3
// [2,3,10]=60         [3,4,5]=60         [2,5,6]=60

int FindTriplet(int n, int m, int arr[]){
    int count = 0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(arr[i]*arr[j]*arr[k]==n){
                    count++;
                }

            }
        }
    }
    cout<<"done"<<endl;
    return count;

}
int main(){
    int n;
    int m;
    cout<<"Enter n ";
    cin>>n;
    cout<<"Enter m ";
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
}
    // int* p = arr;
    // cout<<p;
    cout<<FindTriplet(n,m,arr);
    
    return 0;
}