#include <iostream>
#include <vector>
using namespace std;

vector<int>twosum(vector<int>&nums, int target){
    vector<int>result;
    for(int i=0; i<nums.size(); i++){
        for(int j=i-1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target){
                return result;
            }
        }
    
    }
    return result;
}

int main(){
    int size;
    cout<<"enter size for array : ";
    cin>>size;
    vector<int>nums(size);
    for(int i=0; i<size; i++){
        cin>>nums[i];
    }

    int target;
    cin>>target;
    vector<int>result = twosum(nums, target);
    if(!result.empty()){
        cout<<"found";
    }
    else{
        cout<<"empty";
    }
    return 0;
}