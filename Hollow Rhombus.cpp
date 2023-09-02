#include <iostream>
using namespace std;
int main () {
	int a,b;
	cout << "Enter even number of rows of Rhombus : ";
	cin >> b;
	a=b/2;
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<a-i ; j++) {
			cout << "*";
		}
		for (int k=0 ; k<i+1 ; k++) {
			cout << "  ";
		}
		for (int l=0 ; l<a-i ; l++) {
			cout << "*";
		} 
		cout << endl;
	}
	for (int i=0 ; i<a ; i++) {
		for (int j=0 ; j<i+1 ; j++) {
			cout << "*";
		}
		for (int k=0 ; k<a-i ; k++) {
			cout << "  ";
		}
		for (int l=0 ; l<i+1 ; l++) {
			cout << "*";
		}
		cout << endl; 
	}
}
