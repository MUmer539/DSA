#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node* next;
	public:
		Node(){
			data = 0;
			next = NULL;
		}
		Node(int data){
			this->data = data;
			next = NULL;
		}
		void setData(int data){
			this->data = data;
		}
		void setNext(Node* next){
			this->next = next;
		}
		int getData(){
			return data;
		}
		Node* getNext(){
			return next;
		}			
};
int main(){
	Node head(2),n1(3),n2(4),n3(5);
	head.setNext(&n1);
	n1.setNext(&n2);
	n2.setNext(&n3);
	Node* temp = &head;     //creating temp  node pointer and passing address of head to it
	cout<<temp->getData();  //printing the value stored in the address pointed by temp
	temp = temp->getNext(); //pointer temp points to n1 after this statement
	cout<<endl<<temp->getData();  //printing the value of n1 using temp pointer 
	temp = temp->getNext(); //pointer temp points to n2 after this statement
	cout<<endl<<temp->getData();  //printing the value of n2 using temp pointer 
	temp = temp->getNext(); //pointer temp points to n3 after this statement
	cout<<endl<<temp->getData();  //printing the value of n3 using temp pointer 
	
}
