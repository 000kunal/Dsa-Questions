#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<"Finding 5 --> "<<binary_search(v.begin(), v.end(),5)<<endl;

    int a = 5;
    int b = 7;

    cout<<"Max --> "<<max(a,b)<<endl;
    cout<<"Min --> " <<min(a,b)<<endl;

    swap(a,b);
    cout<<"A new value --> "<<a<<endl;

    string s = "Kunal";
    reverse(s.begin(), s.end());
    cout<<"String --> "<<s<<endl;

    rotate(v.begin(), v.begin()+ 1, v.end());

    cout<<"After rotate  --> "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }  cout<<endl;

    sort(v.begin(), v.end());
    cout<<"Sorted after rotating --> ";
    for(int i : v){
       cout<<i<<" ";
    }
}