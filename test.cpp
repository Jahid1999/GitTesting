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
		cout << a << " is greater" << endl;
	else
		cout << b << " is greater" << endl;
}

int main(void)
{
	int a=23, b=20;
	
	printGreater(a,b);
	swap(a,b);
	
	
	return 0;
}
