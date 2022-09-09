#include<iostream>
using namespace std;

int Firstocc(int arr[], int n , int key){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;
    int ans = -1;
    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;

}

int Lastocc(int arr[], int n , int key){
    int s = 0;
    int e = n - 1;

    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){

    int Even[10] ={1, 2, 3, 3, 3, 3, 3, 4, 5, 6};

    int first = Firstocc(Even, 10, 3);
    cout<<"First Occurence of the number is at index --> "<<first<<endl;

    int last = Lastocc(Even, 10, 3);
    cout<<"Last Occurence of the number is at Index --> "<<last<<endl;
}