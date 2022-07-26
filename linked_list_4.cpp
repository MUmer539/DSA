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
	int count = 0;
	Node* temp = &head;     //creating temp  node pointer and passing address of head to it
	while(temp!=NULL){      //using loop to print the linked list
		temp = temp->getNext();
		count++;
	}
	cout<<"LENGTH OF LINKED LIST = "<<count;
}
