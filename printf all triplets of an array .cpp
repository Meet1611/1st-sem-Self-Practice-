#include <iostream>
using namespace std;

void  allPairs(int arr[] , int s) {
	for (int i=0; i<s; i++) {
		for (int j=0; j<s; j++) {
			for (int k=0; k<s; k++) {
			cout << "(" << arr[i] << ","<< arr[j] << "," << arr[k] << ")" << "  ";	
			}
		}
		cout << endl;
	} 
}

int main () {
	int arr []={10,20,30,40};
	int s=4;
	allPairs(arr,s);
	return 0;		
}
