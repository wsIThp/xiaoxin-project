#include <iostream>	
using namespace std;

class point						//// 类中的变量默认的使用范围是两个大括号之间。
								//// 类不占空间，所以不允许在申明的时候初始化。		
{
public:							/////被puiblic修饰的变量可以在任何地方使用。
	void init()
	{
		x=1;
		y=2;
	}
	void show()
	{
		cout<<"p.x="<<x<<endl<<"p.y="<<y<<endl;
	}
private:					////被private修饰的变量只能在类中使用，两个大括号之间时是他的使用范围。
	int x;
	int y;
};

int main(void)
{
	point p;
//	cout<<"p.x="<<p.x<<endl;
//	cout<<"p.y="<<p.y<<endl;
	p.init();
	p.show();
	return 0;
}

