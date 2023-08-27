#include <iostream>
using namespace std;
int main () {
	int a,i,j;
	cout << "Enter a number " << endl;
	cin >> a;
	for (i=1 ; i<=a ; i++) {
		for (j=1 ; j<=a ; j ++) {
			cout << "*";
		}
		cout << endl;
	}
}
