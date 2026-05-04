#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
int arr[N];
void merge(int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int l, int r)
{
    if (l == r)
    {
        return;
    }
    int m = l + (r - l) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    merge(l, m, r);
}

int main()
{
    int n = 11;
    int temp[] = {38, 27, 43, 3, 9, 82, 10, 56, 12, 100, 1};
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
