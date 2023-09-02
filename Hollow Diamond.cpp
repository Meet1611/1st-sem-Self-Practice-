#include <iostream> 
using namespace std;
int main () {
	int a,b;
	cout << "Enter even rows of Diamond (because Diamond has only even rows) : ";
	cin >> b;
	a=b/2;
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<a-i-1 ; j++) {
			cout << " ";
		}
		for (int k=0 ; k<i+1 ; k++) {
			if (k==0 || i==k) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
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
