#include <iostream>
using namespace std;

void  ShiftbyOne(int arr[] , int s) {
	int temp = arr[s-1];
	for (int i=s-1; i>=1; i--) {
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	
}

int main () {
	int arr []={10,20,30,40,50,60};
	int s=6;
	ShiftbyOne(arr,s);
	for (int i=0; i<s; i++) {
		cout << arr[i] << " ";
	}
	return 0;		
}
