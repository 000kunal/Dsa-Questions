#include<iostream>
#include<stack>  // based on LIFO principle(Last in First out)

using namespace std;

int main(){
    stack<string>s;  // It is conceptual Structure cosnisting of a set of homogeneous Element

    s.push("Kunal");
    s.push("Kapil");
    s.push("Harsh");
    s.push("BhaviK");

    cout<<"Top Element --> "<<s.top()<<endl;
    cout<<"Size before pop --> "<<s.size()<<endl;
    s.pop();
    cout<<"After pop Top Element --> "<<s.top()<<endl;

    cout<<"Size of Stack : "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;

}