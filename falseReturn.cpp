#include<bits/stdc++.h>

using namespace std;

void falseReturn(int a, int b)
{
	if(a>b)
	{
		cout << b << " is greater than " << a << endl;
	}
	else
		cout << a << " is greater than " << b << endl;	
	
}

int main(void)
{
	int a=10, b=20;
	
	falseReturn(a,b);
	
	return 0;
}
