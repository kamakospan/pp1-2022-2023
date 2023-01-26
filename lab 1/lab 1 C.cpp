#include<iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	
	int r1 = n % 2; // 12%2=0
	int r2 = (n/2)%2; // 12/2%2=0
	int r3 = (n/4)%2; // 12/4%2=0
	int r4 = (n/8)%2; //12/8%2=0
	
	cout << (8*r1)+(4*r2)+(2*r3)+r4;
	
	
}