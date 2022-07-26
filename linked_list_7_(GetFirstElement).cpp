#include<iostream>
#include<stdlib.h>
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
	 	void traversal(Node* head){
			Node* temp = head;
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
		int getFirstElement(Node* temp){  //Getting the first element of linked list
			int x;
			x = temp->data;
			return x;
		}
	
		
		
};
int main(){
	Node* head = new Node;
	Node* temp = head;
	for(int i=1;i<=19;i++){
		temp->setData(rand()%20);
		temp->setNext(new Node);
		temp = temp->getNext(); 
	}
	temp = head;
	cout<<temp->getFirstElement(temp)<<endl;
	//temp->traversal(head);
	
	
}
