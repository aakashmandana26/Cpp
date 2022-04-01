#include <iostream>                                
using namespace std;                           





int main(){
int n;
int i;
int key;
cout<<"no of values. = ";
cin>>n;
int arr[n];
for (i=0;i<n;i++){
    cout<<"Enter "<<i+1<<"th number: ";
     cin>>arr[i];
}


// /Linear Search
// cout<<"Enter the key element ";
// cin>>key;
// for (i=0;i<n;i++){
    // if (arr[i]==key){
        // cout<<key<<" found at "<<i<<endl;
        // break;
    // }
//   
//   
//   }
//   cout<<"Search completed";

                                                
cout<<"enter a number to search: ";
cin>>key;
int s=0;
int e= n-1;
int mid = (s+e)/2;
while(s<=e){
    cout<<"searching.."<<endl;
    mid = (s+e)/2;
    
    if(arr[mid]==key){
         cout<<"key found"<<endl;
         break;
         }
    else if(arr[mid] > key){
        e=mid-1;
    }
    else {
        s=mid+1;
    }

}
if(s>e){
    cout<<"key not found!"<<endl;
}


cout<<"search completed"<<endl;






    




return 0;

}
              











































