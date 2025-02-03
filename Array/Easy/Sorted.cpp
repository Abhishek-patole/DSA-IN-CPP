#include<iostream>
using namespace std;

void isSorted(int a[], int n)
{
		for(int i=1;i<n;i++){
		if(a[i] >= a[i-1]){
			
		}
		else{
			cout<<"Array is not sorted";
			return ;
		}
	}
	cout<<"Sorted";
}
int main()
{
	int  a[] = {1,2,4,4,9,5};
	isSorted(a,6);

	return 0;
	
}
