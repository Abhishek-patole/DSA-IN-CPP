#include<bits/stdc++.h>

using namespace std;

int majorityElementBrute(vector<int> &a)
{
	int n=a.size();
	for(int i=0; i<n; i++)
	{
		int count=0;
		for(int j=0; j<n; j++)
		{
			if(a[j] == a[i])
			{
				count++;
			}
		}
		if(count > n/2) return a[i];
	}
}


// Work only in latest compiler
//int majorityElementBetter(vector<int> &a)
//{
//	map<int,int> mp;
//	int n=a.size();
//	for(int i=0; i<n; i++){
//		mp[a[i]]++;
//	}
//	
//	for( auto it : mp)
//	{
//		if(it.second > n/2)
//		return it.first;
//	}
//}


int majorityElementOptimal(vector <int> &a)
{
	int n=a.size();
	int cnt = 0;
	int element;
	for(int i=0; i<n; i++)
	{
		
		if(cnt == 0)
		{
			cnt++;
		   	element = a[i];
		}
		else if( a[i] == element)
		{
			cnt++;
		}
		else{
			cnt--;
		}
	}
	
	int cnt1=0;
	for(int i=0; i<n; i++)
	{
		if(element == a[i])
		{
			cnt1++;
		}
		if(cnt1 > n/2) return element;
	}
}

int main()
{
	vector<int> a;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);  // Populate the vector with user input.
    }
    
    int ans = majorityElementOptimal(a);
    cout<<ans;
    
    
	return 0;
}
