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
	return 0;
}
