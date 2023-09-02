#include <iostream> 
using namespace std;
int main () {
	int a;
	cout << "Enter rows of Pyramid : ";
	cin >> a;
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<i ; j++) {
			cout << " ";
		}
		for (int k=0 ; k<a-i ; k++) {
			if (k==a-i-1 || k==0) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
	
}
