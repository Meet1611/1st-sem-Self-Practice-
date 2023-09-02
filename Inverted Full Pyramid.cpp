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
			cout << "* ";
		}
		cout << endl;
	}
	
}
