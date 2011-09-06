#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int miao;
};

int main(int argc, const char *argv[])
{
	struct time akaedu={12,12,12};	
	printf("%5d%5d%5d",akaedu.hour,akaedu.minute,akaedu.miao);
	return 0;
}
