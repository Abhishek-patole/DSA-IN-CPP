#include<iostream>

using namespace std;

void sort012(int a[],int n){

int low,mid,high;
	low=0;
	mid=0;
	high=n-1;
	
	while(mid <= high)
	{
		if(a[mid] == 0)
		{
			swap(a[low], a[mid]);
			mid++;
			low++;
		}
		else if(a[mid] == 1)
		{
			mid++;
		}else{
			swap(a[mid], a[high]);
			high--;
		}
	}
}

int main()
{
	int a[] = {0,1,2,0,1,2,1,2,0,0,0,1};
//	
//	int c0=0, c1=0, c2=0;
//	int n = sizeof(a)/ sizeof(a[0]);
//	for(int i=0; i<n; i++)
//	{
//		if(a[i] == 0) c0++;
//		else if(a[i] == 1) c1++;
//		else c2++;
//	}
	
//	cout<<c0<<" "<<c1<<" "<<c2<<" ";
//	
//	for(int i=0; i<n; i++)
//	{
//		if(i < c0) {
//			a[i] = 0;
//			
//		
//		}
//		else if(i < c1+c0){
//			a[i] = 1;
//			
//		
//		} 
//		else {
//			a[i] = 2;
//			
//	}}
//	

	int n = sizeof(a)/sizeof(a[0]);

    sort012(a,n);
	for(int i=0; i<n; i++){
		cout<<" "<<a[i];
	}
	return 0;
	
}
