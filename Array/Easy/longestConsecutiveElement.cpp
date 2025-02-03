#include<iostream>

using namespace std;

bool linearSearch(int a[], int ele, int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i] == ele)
		{
			return true;
		}
	}
	return false;
}

void sort(int arr[], int n){
	for(int i=0; i< n; i++)
	{
		bool isSorted = true;
		for(int j=1; j < n -i; j++)
		{
			if(arr[j-1]> arr[j])
			{
				swap(arr[j], arr[j-1]);
				isSorted = false;
			}
		}
		if(isSorted == true)
			break;
	}
}

int longestConsecutiveSeqBrute(int a[], int n)
{
	int longest = 1;
	
	for(int i=0; i<n; i++)
	{
		int count = 1;
		int x=a[i];
		
		while(linearSearch(a,x+1,n) == true)
		{
			x++;
			count++;
		}
		if(longest < count)
		{
			longest = count;
		}
	}
	
	return longest;
}

int longestConsecutiveSeqBetter(int a[], int n)
{
	sort(a,n);
	
	int longest=1; int count =0; int lastSmallest = INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		if(a[i]-1 == lastSmallest)
		{
			count ++;
			lastSmallest = a[i];
		}
		else if(a[i] != lastSmallest)
		{
			count = 1;
			lastSmallest = a[i];
		}
		
		longest = max(longest, count);
	}
	return longest;
	
}

int main()
{
	int a[] = {102,4,100,1,101,3,2,1,1};
	int n= sizeof(a)/ sizeof(a[0]);
	
	int length = longestConsecutiveSeqBetter(a,n);
	cout<<length;
	return 0;
}
