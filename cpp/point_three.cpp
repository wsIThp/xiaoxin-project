#include <iostream>	
#include <cstring>

using namespace std;

class point						//// 类中的变量默认的使用范围是两个大括号之间。
{
public:							/////被puiblic修饰的变量可以在任何地方使用。
	point(int x,int y)						/////构造函数
	{
		this->x=x;
		this->y=y;
		p=(char *)new char[1024];
		strcpy(p,"wo");
	}
	~point()					////析构函数：释放变量所占的空间。是在整个函数结束后在才调用此函数
	{
		if(p)
		delete []p;
		p=NULL;
	}
	void show()
	{
		cout<<"p.x="<<x<<endl<<"p.y="<<y<<endl;
		cout<<"p="<<p<<endl;
	}
private:					////被private修饰的变量只能在类中使用，两个大括号之间时他的使用范围。
	int x;
	int y;
	char *p;
};
int main(void)
{
	point p(3,5);
	//cout<<"p.x="<<p.x<<endl;
	//cout<<"p.y="<<p.y<<endl;
	p.show();
	return 0;
}

