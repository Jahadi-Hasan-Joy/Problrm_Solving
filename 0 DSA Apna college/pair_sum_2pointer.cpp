#include<bits/stdc++.h>
using namespace std;
#define ll long long 

vector<int>pairsum(vector<int> nums , int target)
{
    vector<int>ans;
    int start = 0;
    int end = nums.size() - 1;
    while(start<end)
    {
        int sum = nums[start] + nums[end];
        if(sum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = pairsum(nums, target);
    cout<< result[0]<<" "<<result[1]<<endl;

    return 0;
}