#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter  number of rows ";
	cin >> a;
	cout <<endl;
	for (int i=0;i<a;i++) {
		for (int j=1;j<=a-i;j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}
