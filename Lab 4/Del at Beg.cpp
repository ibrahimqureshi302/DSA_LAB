#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
		
	public:
	Node *head;
	
	Node(){
		head=NULL;
	}
	
	void insert_beg(int n){
		
		if(head==NULL){
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head=p;
		   	
		}		
	}
	
	void del_beg(){
		
		if(head==NULL){
	
		 cout<<"No Nodes Exist"<<endl;	
			
		}
		
		else{
			
		  Node *ptr;
		  ptr = head;
		  head = head->next;
		  delete(ptr);
		  ptr = NULL;
		}		
	}
	
	void display()
	{
	Node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(ptr!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	
    }	
	
};

int main()
{
	Node n;
    
    n.insert_beg(1);
    n.insert_beg(3);
    n.insert_beg(5);
    n.insert_beg(50);
    n.del_beg();
    n.display();
	return 0;
	
}
