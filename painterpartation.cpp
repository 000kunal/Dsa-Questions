#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>&arr, int k , int mid)
{
      int painterCount = 1;
      int timeSum = 0;

    for(int i = 0; i<arr.size(); i++){

        if(timeSum + arr[i] <= mid){
           timeSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
        timeSum = arr[i];
        }
    }
    return true;

}
int FindpainterPartition(vector<int>&arr,int k){
    int s = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(arr,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid +1;
        }
        mid  = s +(e-s)/2;
    }
    return ans;
}

int main(){

    //vector<int>arr = {5, 5, 5, 5};
    vector<int>arr;
    int k ,a ;
    cout<<"Enter the number of painters --> ";
    cin>>k;

    int n = 4;
    cout<<"Enter the elements in vector : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }


    int Answer = FindpainterPartition(arr, k);
    cout<<"The Answer of the problem is --> "<<Answer<<endl;
}