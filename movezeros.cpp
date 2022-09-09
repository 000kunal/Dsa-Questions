#include<iostream>
#include<vector>
using namespace std;

int moveZeros(vector<int>&nums){

    int nonzero = 0;
    for (int j = 0 ; j<nums.size(); j++){

        if(nums[j] != 0){
            swap(nums[j], nums[nonzero]);
            nonzero++;
        }
    }
}
void print(vector<int>&ans){
    cout<<"Vector After moving zeros to Right --> ";
    for (int i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>nums = {0,1,0,3,9,0};

    moveZeros(nums);
    print(nums);

}