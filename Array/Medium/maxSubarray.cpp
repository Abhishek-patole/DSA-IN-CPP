#include<iostream>

using namespace std;

int maxSubArrayBetter(int a[], int n)
{
	int maximum;
	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=i; j<n; j++)
		{
			sum += a[j];
			 maximum = max(sum, maximum); 	
		}
	}
	
	return maximum;
}

int maxSubArrayOptimal(int a[], int n)
{
	int maxi = INT_MIN, sum =0;
	
	for(int i =0; i<n; i++)
	{
		sum += a[i];
		
		if(maxi < sum)
		{
			maxi = sum;	
		}	
		
		if(sum < 0)
		{
			sum = 0;
		}
	}	
	
	return maxi;
}

int maxSubArrayBrute(int a[], int n)
{	int maximum=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			int sum=0;
			for(int k=i; k<j;k++)
			{
				sum += a[k];
			}
			maximum = max(sum, maximum);
		}
	}
	
	return maximum;
}

int main()
{
	int a[] = {-2,-3,4,-1,-2,1,5,-3};
	int n= sizeof(a)/sizeof(a[0]);


	
	int maximum = maxSubArrayOptimal(a,n);
	
	cout<<maximum;
	return 0;
	
}
