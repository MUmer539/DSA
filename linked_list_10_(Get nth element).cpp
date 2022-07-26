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
	 	void traversal(Node* head){    //Function to print all elemenmts in the list
			Node* temp = head;
			while(temp->next!=NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
		int getFirstElement(){  //Getting the first element of linked list
			int x = getElement(1);
			return x;
		}
		int getLastElement(){  //Getting the last element of linked list
			int x = getElement(getlength());
			return x;	
		}
		int getlength(){       //Getting length of the linked list
			Node* ptr = this->getNext();
			int len=0;
			while(ptr!=NULL){
				ptr = ptr->getNext();
				len++;		
			}
			return len;
		}	
		int getElement(int pos){ //Getting the nth element of the linked list
			Node* ptr = next;
			for(int i=1;i<=pos-2;i++){
				ptr = ptr->next;
			}
			int x = ptr->data;
			return x;
		}  	
		
};
int main(){
	Node* head = new Node;
	Node* temp = head;
	for(int i=1;i<=20;i++){
		temp->setData(rand()%20);
		temp->setNext(new Node);
		temp = temp->getNext(); 
	}
	temp = head;
	//cout<<temp->getFirstElement()<<endl;
    //cout<<temp->getLastElement(temp)<<endl;
	//cout<<temp->getlength();
	cout<<temp->getElement(10);
	//temp->traversal(head);

    

	
}
