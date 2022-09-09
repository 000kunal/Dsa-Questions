#include<iostream>
#include<vector>
using namespace std;

int mountainarray(vector<int>&arr, int n){
       int s =0;
       int e = arr.size() - 1;

       int mid = s + (e-s)/2;
       while (s<e)
       {
        if(arr[mid]< arr[mid +1]){                                                                 \
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
       }
    return s;

}
int main(){

    vector<int>array = {2,3,5,8,9,12,7,3,1};

    int ans = mountainarray(array,9);

    cout<<"The peak element of the mountain array is at Index --> "<<ans<<endl;

}