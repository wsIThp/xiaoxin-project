#include "stack.h"

int main()
{
	Stack<int> intstack1,intstack2;
	int n;
	for (n = 0; n < 4; n++) {
		intstack1.push(n);
		intstack2.push(2*n);
	}
	while(intstack1.count())
	{
		n=intstack1.pop();
		cout<<n<<endl;
	}
	Stack<char> stringstack;
	stringstack.push('a');
	stringstack.push('b');
	stringstack.push('c');
	char m;
	while(stringstack.count())
	{
		m=stringstack.pop();
		cout<<m<<endl;
	}
	cout<<"1111111"<<endl;
}
