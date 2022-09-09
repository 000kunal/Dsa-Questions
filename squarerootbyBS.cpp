#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    unsigned int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while (s<=e)
    {
       long long int square = mid*mid;

       if(square == n)
       return mid;

       if(square < n){
        ans = mid;
        s = mid +1;
       }
       else{
        e = mid -1;
       }
       mid  = s+ (e-s)/2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempSol){
   // This is used for getting floating value
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<precision; i++){
         factor = factor/10;
         for(double j = ans ; j*j<n; j = j + factor){
            ans = j;
         }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int tempSOl = binarySearch(num);

    cout<<"The Square root of the number is : "<<moreprecision(num, 3, tempSOl)<<endl;


}