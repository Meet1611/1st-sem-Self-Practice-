#include <iostream>
using namespace std;
int main () {
	int a;
	cout << "Enter rows of Pyramid : ";
	cin >> a;
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<2*i+1 ; j++) {
			if (j%2!=0) {
				cout << "*";
			}
			else {
				cout << i+1;
			}
		}
		cout << endl;
	}
	return 0;
} 
