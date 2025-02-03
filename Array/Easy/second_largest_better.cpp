#include<iostream>

using namespace std;

int main()
{
	int a[5] = {4,7,2,1,4};
	
	int largest = a[0];
	for(int i = 1; i<4; i++){
		if(a[i] > largest){
			largest = a[i];
		}
	}
	
	cout<<"Largest Element is :"<<largest;
	
	int second_largest = -1;
	for(int i=0;i<4;i++){
		if(a[i]>second_largest && a[i] != largest){
			second_largest = a[i];
		}
	}
	
	cout<<"\n2nd largest Element is :"<<second_largest;
	return 0;
}
