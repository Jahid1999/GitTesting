#include<bits/stdc++.h>

using namespace std;

void swap(int a, int b)
{
	cout << "a: " << a << "\tb: " << b << endl;
	
	int tempu = a;
	a = b;
	b = tempu;
	
	cout << "a: " << a << "\tb: " << b << endl;
	
}

int main(void)
{
	int a=13, b=20;
	
	swap(a,b);
	
	return 0;
}
