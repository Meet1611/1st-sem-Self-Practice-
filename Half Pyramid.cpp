#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter rows of Pyramid : ";
	cin >> a;
	cout <<endl;
	for (int i=0;i<a;i++) {
		for (int j=0;j<i+1;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
