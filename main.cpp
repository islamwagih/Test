#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> nums)
{
  int sum = 0;
  for(int& i:nums) sum += i;
  return sum;
}

int getAverage(vector<int> vec)
{
  int sum = getSum(vec);
  return sum/vec.size();
}

int main()
{
  vector<int> vec{4,5,1,2,3,-1,5,0,2,1};
  cout<<getSum(vec)<<endl;
  cout<<getAverage(vec)<<endl;
  return 0;
}
