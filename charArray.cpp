#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }
}
int getlength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout<<"Enter Your Name --> "<<endl;
    cin>>name;
    // name[2] = '\0';

    cout<<"Your Name is "<<name<<endl;  // If we will give space between the string then it will print till null character
    int k = getlength(name);
    cout<<"The length of the string --> "<<k<<endl;

    reverse(name, k);
    cout<<"Reversed name is --> "<<name<<endl;

}