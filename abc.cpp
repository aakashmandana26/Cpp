#include <iostream>
using namespace std;
int main(){
    
    int nums[4]= {2,7,11,15}



    int target;
    cin>>target;
    for(int i=0;i<len(nums);i++){
        for(int j=i+1;j<5;j++){
            if(nums[i] + nums[j] == target){
                cout <<"["<<i<<","<<j<<"]"<< endl;
            }
        }
    }
    
    return 0;
}