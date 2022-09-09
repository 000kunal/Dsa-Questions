#include<iostream>
#include<queue>  // based on FIFO principle(First In First Out)
using namespace std;

int main(){

     queue<string> q;

     q.push("Love");
     q.push("Kunal");
     q.push("kapil");
     q.push("bhavik");
     cout<<"First Element --> "<<q.front()<<endl;

     q.pop();
    cout<<"First Element --> "<<q.front()<<endl;

    cout<<"Size after pop --> "<<q.size()<<endl;
}