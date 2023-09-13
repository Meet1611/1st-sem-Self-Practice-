#include <iostream>
using namespace std;

void  sortZeroOne(int arr[] , int s) {
	int ZeroCount = 0, OneCount = 0; 
	for (int i=0; i<s; i++) {
		if(arr[i]==0) {
			ZeroCount++;
		}
		if(arr[i]==1) {
			OneCount++;
		}
	}
	int index=0;
	while(ZeroCount--) {
		arr[index] = 0;
		index++;
	}
	while(OneCount--) {
		arr[index] = 1;
		index++;
	}
}

int main () {
	int arr []={1,0,0,0,1,0,1,1,0,1,0};
	int s=11;
	sortZeroOne(arr,s);
	for (int i=0; i<s; i++) {
		cout << arr[i] << " ";
	}
	return 0;		
}
