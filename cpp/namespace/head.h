#include <iostream>
using namespace std;
namespace u1
{
class student
{
	public:
	student (int num)
	{
		n=num;
	}
	void show()
	{
		cout<<"n="<<n<<endl;
	}
	private:
		int n;

};
}
