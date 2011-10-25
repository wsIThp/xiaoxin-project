#include <iostream>
using namespace std;
class Area
{
	public :
		virtual void m_area()=0;
};
class T_area:Area
{
	public:
		void m_area()
		{
			cout<<"m_area="<<3.14*x*x<<endl;
		}
	private:
		int x;
};
class Z_area:Area
{
	public:
		void m_area()
		{
			cout<<"m_area="<<x*x<<endl;
		}
	private:
		int x;
};
int main(void)
{
	T_area a;
	Z_area b;
	a.m_area();
	b.m_area();
	return 0;
}

