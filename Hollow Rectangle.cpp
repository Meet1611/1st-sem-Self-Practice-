#include<iostream>
using namespace std;
int main(){
	int a=10,b=7;
	cout <<endl;
	for (int i =0; i<a ; i ++) {
		for (int j=0 ; j<b ; j++) {
			if (i==(a-1)||i==0||j==0||j==(b-1)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
