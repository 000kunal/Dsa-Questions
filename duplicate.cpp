#include <iostream>
using namespace std;

int findduplicate(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)  // using brute force
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {2, 3, 4, 5, 2, 6};

    int ans = findduplicate(arr, 6);
    cout << "The duplicate element in an array is : " << ans;
}