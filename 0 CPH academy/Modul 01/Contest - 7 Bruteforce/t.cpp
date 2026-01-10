#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    string a;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    bool b = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                b=1;
                a = s[i] + s[j];
                int l = a.size();
                for (int k = 0; k < l / 2; k++)
                {
                    if (a[k] != a[l - k - 1])
                    {
                        b = 0;
                    }
                }
                if(b){
					cout<<"Yes"<<endl;
					return 0;
				}
            }
        }
    }
    cout<<"No"<<endl;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}