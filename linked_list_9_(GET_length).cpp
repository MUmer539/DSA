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
			int x;
			x = data;
			return x;
		}
		int getLastElement(Node* temp){  //Getting the last element of linked list
			int x;
			if(temp==NULL){
				x = temp->data;
			}
			else{	
				while(temp->next!=NULL){
					temp = temp->next;
				}
				x = temp->data;
			}
			return x;
		}
		int getlength(){
			Node* ptr = this->getNext();
			int len=0;
			while(ptr!=NULL){
				ptr = ptr->getNext();
				len++;		
			}
			return len;
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
	//temp->traversal(head);

    

	
}
