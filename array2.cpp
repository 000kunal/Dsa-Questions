// ARRAY using function
#include<iostream>
using namespace std;

void printarray(int arr[], int size){

   cout<<"Printing the array : "<<endl;
   for(int i =0; i<size; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl<<"Printing is DONE"<<endl;
}


int main()
{
   int array[20] = {2, 4, 5};
    printarray(array, 20);

    int second[10] = {1};
    printarray(second, 10);

    int thrid[12] ={0};
    printarray(thrid ,12 );

    int fourth[5]= {2,4,6};
    printarray(fourth,3);
    return 0;
}