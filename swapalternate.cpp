#include<iostream>
using namespace std;

int swapalternate(int arr[], int n){

   for(int i= 0; i<n-1; i+=2){
      if(i+1 < n){
        swap(arr[i],arr[i+1]); // swap alternate
      }
    }
    return 0;
}

int main(){
    int arr[6] = {2, 4, 5, 6, 7, 8};

    swapalternate(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

}
