#include<bits/stdc++.h>

using namespace std;

// Optimal solution
/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int,int> mpp;
        mpp[0] = 1;

        int preSum = 0, count =0;

        for(int i=0; i<nums.size(); i++)
        {
            preSum += nums[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] += 1;
        }

        return count;
    }
};
*/

int main()
{
	int a[] = {1,2,3,-3,1,1,1,4,2,-3};
	int cnt = 0,k=3;
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=i; j<n; j++)
		{
			sum =+ a[i];
			if(sum == k) cnt +=1;
		}
	}
	
	cout<<cnt;
	return 0;
}
