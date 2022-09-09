#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int rotateArray(vector<int>&arr, int k){

    vector<int>temp(arr.size());
    for(int i =0 ; i<arr.size(); i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;
}

int leftrotate(vector<int>&arr, int k){

    // rotate function
    rotate(arr.begin(), arr.begin()+k, arr.end());

}
void print(vector<int>&arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {1,2,3,4,5,6,7};

    rotateArray(arr,3);
    print(arr);
    leftrotate(arr,2);
    print(arr);
}