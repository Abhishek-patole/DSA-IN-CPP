#include<iostream>
#include<vector>

using namespace std;

void elementBySignBrute(int a[], int n)
{
	int positive[n/2];
	int negative[n/2];
	int j=0, k=0; 
	for(int i=0; i<n; i++)
	{
		if(a[i] < 0) {
		negative[j] = a[i];	
		j++;
		}
		else {
		positive[k] = a[i];
		k++;	
		}
	}
	
	for(int i=0; i<n/2; i++)
	{
		a[i*2] = positive[i];
		a[i*2+1] = negative[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<" "<<a[i];
	}
}

void elementBySignBetter(int a[], int n)
{
	int pi=0, ni=1;
	int ans[n];
	for(int i=0; i<n; i++)
	{
		if(a[i] < 0){
			ans[ni] = a[i]; 
			ni+=2; 
		}
		else{
			ans[pi] = a[i];
			pi+=2;
		}
		
	}
	for(int i=0; i<n; i++)
	{
		cout<<" "<<a[i];
	}
}

void elementBySignVarietion(int a[], int n)
{
	vector<int> pos, neg;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] < 0)
		{
			neg.push_back(a[i]);
		}
		else{
			pos.push_back(a[i]);
		}
	}
	
	if(neg.size() < pos.size())
	{
		for(int i = 0; i< neg.size() ; i++)
		{
			a[i*2] = pos[i];
			a[i*2+1] = neg[i];
		}
		
		int index = neg.size();
		for(int i = neg.size()*2; i < pos.size() ; i++)
		{
			a[i] = pos[index];
			index++;
		}
	}else{
		for(int i = 0; i< pos.size() ; i++)
		{
			a[i*2] = pos[i];
			a[i*2+1] = neg[i];
		}
		
		int index = pos.size();
		for(int i = pos.size()*2; i < neg.size() ; i++)
		{
			a[i] = neg[index];
			index++;
		}
	}
	
		for(int i=0; i<n; i++)
	{
		cout<<" "<<a[i];
	}
}

int main()
{
//	int a[] = {3,1,-2,-5,2,-4};
	int a[] = {1,2,-4,-5,3,6};
	int n = sizeof(a)/ sizeof(a[0]);
	
	elementBySignVarietion(a,n);
	return 0;
}
