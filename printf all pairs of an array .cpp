#include <iostream>
using namespace std;

void  allPairs(int arr[] , int s) {
	for (int i=0; i<s; i++) {
		for (int j=0; j<s; j++) {
			cout << "(" << arr[i] << "," arr[j] << ")" << "  ";
		}
		cout << endl;
	} 
}

int main () {
	int arr []={10,20,30};
	int s=3;
	allPairs(arr,s);
	return 0;		
}
