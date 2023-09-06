#include <iostream>
using namespace std;
int main () {
	int a;
	cout << "Enter any number : ";
	cin >> a;
	for (int i=0 ;i<a ;i++) {
		for (int j=0 ;j<a+3-i ;j++) {
			cout << "*";
		}
		for (int j=0 ;j<i+1 ;j++) {
			cout << i+1 << "*";
		}
		for (int j=0 ;j<a+2-i ;j++) {
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
