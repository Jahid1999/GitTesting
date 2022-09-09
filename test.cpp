#include<bits/stdc++.h>

using namespace std;

void swap(int a, int b)
{
	cout << "a: " << a << "\tb: " << b << endl;
	
	int temp = a;
	a = b;
	b = temp;
	
	cout << "a: " << a << "\tb: " << b << endl;
	
}

void printGreater(int a, int b){
	if(a>b)
		cout << endl;
		cout << a << " is greater. " << endl;
	else
		cout << b << " is greater. " << endl;
}

int main(void)
{
	int a=15, b=20;
	
	swap(a,b);
	printGreater(a,b);
	
	return 0;
}
