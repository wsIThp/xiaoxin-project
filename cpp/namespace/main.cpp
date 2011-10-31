#include <iostream>
#include "head.h"
#include "head2.h"
int main(void)
{
	u1::student s1(10);
	s1.show();
	u2::student s2(10,(char *)"yuan");
	s2.show();
}
