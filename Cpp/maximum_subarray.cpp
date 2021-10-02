// cpp program to find sum of largest contiguous subarray

#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& nums)
{
  int sum = 0;
  int maxi = INT_MIN;
  for(auto it:nums)
  {
    sum += it;
    maxi = max(sum,maxi);
    if(sum<0)
      sum = 0;
  }
  return maxi;
}

int main()
{
  int size;
  cin>>size;
  vector<int> nums;
  int temp;
  for(int i=0; i<size; i++)
  {
    cin>>temp;
    nums.push_back(temp);
  }
  cout<<maxSubarray(nums);
  return 0;
}
