#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> nums)
{
  int sum = 0;
  for(int& i:nums) sum += i;
  return sum;
}

int getMin(vector<int> nums)
{
    int minIdx = 0;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i] < nums[minIdx]) minIdx = i;
    }
    return nums[minIdx];
}

int main()
{
  vector<int> vec{4,5,1,2,3,-1,5,0,2,1};
  cout<<getSum(vec)<<endl;
  cout<<getMin(vec)<<endl;
  return 0;
}
