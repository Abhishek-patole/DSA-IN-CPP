#include<iostream>

using namespace std;

int main()
{
	int a[6] = {1,2,4,7,7,5};
	int slargest = -1;
	int largest = a[0];
	
	for(int i=1; i<6; i++){
		if(a[i] > largest){
//			largest = a[i];
			slargest = largest;
			largest = a[i];
		}
//		else if(a[i] == largest){
//			i++;
//		}
		else if(a[i]<largest && a[i]>slargest){
			slargest = a[i];
		}
	}
	
	cout<<"Largest Element is :"<<largest;
	cout<<"\n2nd largest Element is :"<<slargest;
	
	return 0;
}
