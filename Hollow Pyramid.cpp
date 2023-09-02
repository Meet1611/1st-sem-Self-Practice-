#include <iostream> 
using namespace std;
int main () {
	int a;
	cout << "Enter rows of Pyramid : ";
	cin >> a;
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<a-i-1 ; j++) {
			cout << " ";
		}
		for (int k=0 ; k<i+1 ; k++) {
			if (i==k || k==0) {
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
