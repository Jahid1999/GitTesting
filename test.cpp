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

int main(void)
{
	int a=10, b=20;
	
	swap(a,b);
	
	return 0;
}
