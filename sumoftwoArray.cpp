#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// vector<int>reverse(vector<int>&v){
//     int s =0;
//     int e = v.size() -1;

//     while (s<e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

int findSum(vector<int>&a, int n, vector<int>&b, int m){

    int i = n-1;
    int j = m-1;
    vector<int>ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    // second case
     while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    //last case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());

    return ans;

}

int main(){

    vector<int>arr = { 1, 2, 3, 4};
    vector<int>arr2 = {6};

    findSum(arr, 4, arr2, 1);
}