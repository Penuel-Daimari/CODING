#include <iostream>
#include <limits>
using namespace std;

double* minimum(double* arr, int len)
{
    int smallIndex = 0;

    for(int i = 1; i < len; i++)
    {
        if(arr[i] < arr[smallIndex])
            smallIndex = i; 
    }
    return &arr[smallIndex];
}

int main()
{
    int n;
    cin >> n;

    double arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double* min = minimum(arr, n);

    cout << *min << endl;
    return 0;
}