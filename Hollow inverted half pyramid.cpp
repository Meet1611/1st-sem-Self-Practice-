#include <iostream>
using namespace std;
int main () {
	int a,i,j;
	cout << "Enter any number : ";
	cin >> a;
	cout << endl;
	for (i=1 ; i<=a ; i++) {
		for (j=1 ; j<=a ; j++) {
			if (i==1 || j ==1 || (i+j)==(a+1)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
	    }
	    cout << endl;
	}
	return 0;
}
