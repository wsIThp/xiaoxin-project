#include <iostream>
#include <cstring>
using namespace std;
namespace u2
{
	class student
	{
		public:
		student (int num,char *s)
		{
			n=num;
			strcpy(name,s);
		}
		void show()
		{
			cout<<"n="<<n<<endl;
			cout<<"name="<<name<<endl;
		}
		private:
		int n;
		char name[10];
	};
}

