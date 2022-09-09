#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string>m;
    m[3] = "Kunal";
    m[16] = "kapil";
    m[6] = "bhavik";

    for(auto i : m){
        cout<<i.first<<endl;
    } cout<<endl;
    // another way to insert
    m.insert({5,"bheem"});

    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;
    cout<<"finding 13 in map --> "<<m.count(16)<<endl;
    m.erase(16);
    cout<<"after erase --> ";

    auto it = m.find(5);
    for(auto i = it; i!= m.end(); i++){
        cout<<(*i).first<<endl;
    }


}