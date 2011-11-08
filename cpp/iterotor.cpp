#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}Node;
Node *create(int n)
{
	int i=0;
	Node *head=NULL;
	Node *p=NULL;
	head=p=(Node *)malloc(sizeof(Node));
	if (p==NULL) {
		perror("create");
		exit(0);
	}
	p->data=1;
	p->next=NULL;
	for (i = 0; i < n; i++) {
		p->next=(Node *)malloc(sizeof(Node));
		if (p->next==NULL) {
			perror("create");
			exit(0);
		}
		p->next->data=i+1;
		p->next->next=NULL;
		p=p->next;
	}
	return head;
}
class Iterator
{
public:
	Iterator():pt(0){}
	Iterator(Node *pn):pt(pn){}
	int operator *(){return pt->data;}
	Iterator &operator++(int)
	{	pt=pt->next;return *this;}
	Iterator &operator++(int)
	{
	   Iterator *tmp=this;pt=pt->next;return *tmp;
	}
	Node *get_pt()
	{
	    return pt;
	}
private:
	Node *pt;
};
Iterator find_note(Iterator begin,int val)
{
	Iterator it;
	for (it = begin; it.get_pt() != 0; it++) {
		if (*it==val) {
			return it;
		}
	}
	return NULL;
}
int main(void)
{
	Node *head=NULL;
	head=create(10);
    Iterator i(head);
	Iterator j;
	j = find_note(i, 0);
	cout << *j << endl; 
	return 0;
}

