#include<iostream>
#include<vector>
using namespace std;

void tripLetsum(int arr[] , int n , int K ){

    for(int i =0; i<n - 1; i++){
        for (int j = i + 1; j < n -1; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
               if (arr[i] + arr[j] + arr[k] == K)
               {
                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k] <<endl;
               }

            }

        }

    }
}

int main(){

    int arr[10] = {1,2,3,4,5,6};
    int s = 10;
    tripLetsum(arr, 6 , s);
}