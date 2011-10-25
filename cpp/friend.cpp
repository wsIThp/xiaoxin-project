#include <iostream>
using namespace std;
class Animal
{
public:
	Animal(int num)
	{
		age=num;
		cout<<"animal sleep"<<endl;
	}
friend void show(Animal a);	
private:	
	int age;
};
void show(Animal a)
{
	cout<<"age="<<a.age<<endl;
}
int main(void)
{
	Animal an(2);
	show(an);
}
