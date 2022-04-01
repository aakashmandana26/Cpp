#include <iostream>
using namespace std;
int main(){
    
    int nums[5];
    int target;
    for(int a=0;a<5;a++){
        cin>>nums[a];
    }
    cin>>target;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(nums[i] + nums[j] == target){
                cout <<"["<<i<<","<<j<<"]"<< endl;
            }
        }
    }
    
    return 0;
}