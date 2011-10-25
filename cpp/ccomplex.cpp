#include <iostream>
using namespace std;
class Ccomplex
{
public:	
	Ccomplex(double r=0,double i=0)
	{
		real=r;img=i;		
	}
	void show()
	{
		cout<<"real="<<real<<endl;
		cout<<"img ="<<img<<endl;
	}
	Ccomplex operator +(Ccomplex &c);
	Ccomplex operator +(double r);
	friend Ccomplex operator +(double r,Ccomplex &c);		////定义友元。
private:
	double real;
	double img;
};
Ccomplex Ccomplex::operator +(Ccomplex &c)
{
	Ccomplex tmp;
	tmp.real=c.real+real;
	tmp.img=img+c.img;
	return tmp;
}
Ccomplex Ccomplex::operator +(double r)
{
	Ccomplex tmp;
	tmp.real=real;
	tmp.img=img+r;
	return tmp;
}
Ccomplex operator +(double r,Ccomplex &c)
{
	Ccomplex tmp;
	tmp.real=c.real;
	tmp.img=c.img+r;
	return tmp;
}
int main(void)
{
	Ccomplex c1(11,22),c2(10,0.3),c;
	c=c1+c2;
	c.show();
	c=c1+19;
	c.show();
	c=19+c2;
	c.show();
	return 0;
}

