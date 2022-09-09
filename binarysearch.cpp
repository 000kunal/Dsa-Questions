#include<iostream>
using namespace std;


int BinarySearch(int arr[], int size, int key){
    int Start = 0;
    int End = size-1;

    int mid = Start + (End - Start)/2;

    while(Start<=End){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            Start = mid + 1;
        }
        else{
            End = mid - 1;
        }

       mid = Start + (End - Start)/2;
    }
    return -1;
}
int main(){

   int even[6] = {2, 4, 6, 8, 12, 14};
   int odd[5] = {3, 6, 9, 12, 15};

   int EvenIndex =  BinarySearch(even, 6, 4);
   cout<<"The ELement is at index : "<<EvenIndex<<endl;

   int OddIndex = BinarySearch(odd, 5, 5);
   cout<<"The Element is at index : "<<OddIndex<<endl;


}