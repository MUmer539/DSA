#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Node
{
	private:
		int val;
		Node *link;
	public:
		Node()
		{
			val = 0;
			link = NULL;
		}	
		Node(int val)
		{
			setVal(val);
			link = NULL;
		}
		void setVal(int val)
		{
			this->val = val;
		}
		void setLink(Node *link)
		{
			this->link = link;
		}
		int getVal()
		{
			return val;
		}
		Node *getLink()
		{
			return link;
		}		
};
int main()
{
	Node n1(2),n2(3);
	n1.setLink(&n2);
	cout<<n1.getVal();
}
