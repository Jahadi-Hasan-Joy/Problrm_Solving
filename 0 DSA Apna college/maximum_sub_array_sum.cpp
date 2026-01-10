#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n = 7;
    int arr[] = {3,-4,5,4,-1,7,-8};
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            max_sum = max(max_sum, curr_sum);
        }
    }
    cout << "Maximum Subarray Sum is: " << max_sum << endl;
    return 0;
}