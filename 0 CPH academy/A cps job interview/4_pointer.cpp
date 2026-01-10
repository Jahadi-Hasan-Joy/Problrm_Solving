#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    // 'arr' acts as a pointer to arr[0]
    int *ptr = arr;

    cout << "Using array name as a pointer:" << endl;
    for (int i = 0; i < 5; i++)
    {
        // *(arr + i) is equivalent to arr[i]
        cout << "Element " << i << ": " << *(arr + i) << endl;
    }
    cout << "\nUsing a separate pointer:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": " << *ptr << endl;
        ptr++; // Move to the next element
    }
    return 0;
}
