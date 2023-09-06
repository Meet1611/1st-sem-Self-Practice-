#include <iostream>
using namespace std;
int main () {
	int a,b=1;
	cout << "Enter any number : ";
	cin >> a;
	for(int i=0 ;i<a ;i++ ) {
		for (int j=0 ;j<i+1 ;j++) {
			cout << b ;
			b++;
		}
		cout << endl;
	}
	return 0;
}
