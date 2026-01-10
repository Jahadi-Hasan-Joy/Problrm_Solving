#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int golbal_range = 1e7;
int arr_glob[golbal_range]; //* global scope array

int main()
{
    //?  Arraay
    //!  globally 1e7 porjonto use kora jai and locally 1e5 porjonto use kora jai

    //? Array range in local scope
    arr_glob[golbal_range - 1] = 5432; //* global scope array access
    cout << "The last element of global array is " << arr_glob[golbal_range - 1] << endl;

    int range = 1e5; //* er besi locally use kora jai na
    int arr2[range];
    arr2[range - 1] = 100; //* last index value
    cout << "The last element of array is " << arr2[range - 1] << endl;

    int a[100]; //* it can store 0 to 99
    //! out of range access korle segmentation error hobe
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array elements is " << sum << endl;

    //! char array user er dorkar nai , string  use korbo

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int arr1[x][y];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "The elements of array are: " << endl;
    int sum1 = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr1[i][j] << " ";
            sum1 += arr1[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sum of array elements is " << sum1 << endl;
    cout << sum1 << endl;

    return 0;
}