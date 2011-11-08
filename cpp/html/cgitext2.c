#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *data;
	data=getenv("QUERY_STRING");
	printf("Content-type:text/html\n\n");
	printf("<html>\n");
	printf("<head><title>An html page from a cgi</title></head>\n");
	printf("<body bgcolor=\"#660066\">%s</body>\n",data);
	printf("</html>\n");
	fflush(stdout);
	return 0;
}
