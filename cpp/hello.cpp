#include <iostream>	
using namespace std;

struct point
{
	int x;
	int y;
	void show()
	{
		cout<<"p.x="<<x<<endl<<"p.y="<<y<<endl;
	}
};

int main(void)
{
	point p;
	p.x=1;
	p.y=2;
	//cout<<"p.x="<<p.x<<endl;
	//cout<<"p.y="<<p.y<<endl;
	p.show();
	return 0;
}

