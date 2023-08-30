#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter  number of rows ";
	cin >> a;
	cout <<endl;
	for (int i=1;i<=a;i++) {
		for (int j=0;j<i;j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}
