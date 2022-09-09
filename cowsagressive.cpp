#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isPossible(vector<int>&stalls, int k , int mid){

       int cowsCount = 1;
       int Lastpos = stalls[0];

       for(int i =0 ; i<stalls.size(); i++){
        if(stalls[i] - Lastpos >= mid){
            cowsCount++;
            if(cowsCount == k){
                return true;
            }
            Lastpos = stalls[i];
        }
      }
     return false;
}

int cowsAgressive(vector<int>&stalls , int k){

    sort(stalls.begin(), stalls.end());
    int s =0;
    int maxi =-1;
    for(int i = 0; i<stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(stalls , k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int main(){

    vector<int>stalls = {4, 2, 1, 3, 6};
    int k = 2;

    int Answer = cowsAgressive(stalls , k);
    cout<<"The Answer of the problem is --> "<<Answer<<endl;
}