#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

     for(int i =0; i<size;i++){

       if (arr[i] == key){
        return 1;
       }
     }
     return 0;
}

int main(){
    int arr[10] = {1,3,5,6,7,8,9,12,34,56};
    cout<<"Enter the value of Element you want to search : ";
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if (found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }
}