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
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
		int getFirstElement(){  //Getting the first element of linked list
			int x ;
			x = data;
			return x;
		}
		int getLastElement(){  //Getting the last element of linked list
			int x = getElement(getlength());
			return x;	
		}
		int getlength(){       //Getting length of the linked list
			Node* ptr = this->getNext();
			int len=1;
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
		void InsertNode(int val){
			Node *temp=new Node(val);
			Node *ptr = this->getNext();
			for(int i=2;i<getlength();i++)
			{
				ptr=ptr->next;
			}
			ptr->setNext(temp);
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
	cout<<"All element in linked list are:"<<endl;
	temp->traversal(head);
	cout<<"First element of Linked list is: "<<temp->getFirstElement()<<endl;
    cout<<"Last element of linked list is :"<<temp->getLastElement()<<endl;
	cout<<"Length : "<<temp->getlength()<<endl;
	cout<<"nth Element : "<<temp->getElement(10)<<endl;
	temp->InsertNode(5);
	temp->traversal(temp);



    

	
}
