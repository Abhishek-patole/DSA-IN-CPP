#include<iostream>

using namespace std;

/*

Another approach with space complexity O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};
*/

int main()
{
	int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	cout<<"Before:"<<endl;
	
	for(int i=0; i<4; i++)
    {
    	for(int j=0; j<4;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int ans[4][4];
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			ans[j][4-1-i] = a[i][j];
		}
	}
	
	cout<<"After:"<<endl;
	
	for(int i=0; i<4; i++)
    {
    	for(int j=0; j<4;j++)
    	{
    		cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
