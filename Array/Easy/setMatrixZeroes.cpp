#include<iostream>

using namespace std;

void markRow(int a[][4], int n, int i)
{
	for(int j=0; j<n; j++)
	{
		if(a[i][j] != -1)
		{
			a[i][j] = -1;
		}
	}
}

void markCol(int a[][4], int n, int j)
{
	for(int i=0; i<n; i++)
	{
		if(a[i][j] != -1)
		{
			a[i][j] = -1;
		}
	}
}

/*

With O(n*m) time complexity
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;               }
            }
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(col[j] == 1 || row[i] == 1)
                {
                    matrix[i][j] =0;
                }
            }
        }

       
    }
};
*/


int  main()
{
    int a[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    
    for(int i=0; i<4; i++)
    {
    	for(int j=0; j<4;j++)
    	{
    		if(a[i][j] == 0)
    		{
    			markCol(a,4,j);
    			markRow(a,4,i);
			}
		}
	}
	
	 for(int i=0; i<4; i++)
    {
    	for(int j=0; j<4;j++)
    	{
    		if(a[i][j] == -1)
    		{
    			a[i][j] = 0;
			}
		}
	}
	
	 for(int i=0; i<4; i++)
    {
    	for(int j=0; j<4;j++)
    	{
    		cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
