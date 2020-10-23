#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		next=NULL;
	}
};

node *takeInput(){
	int data;
	cin>>data;
	node* head= NULL;
	node* tail=NULL;
	while(data !=-1){
		node* newnode= new node(data);
		if(head==NULL){
			head= newnode;
			tail=newnode;
		}
		else{
			tail->next = newnode;
			tail = tail->next;
		}
		cin>>data;
	}
	return head;
}

void print( node* head){
	node *temp = head;
	while( temp!= NULL){
		cout<<temp->data<<" "<<endl;
		temp=temp->next;
	}
}

int length(node *head){
	node* temp=head;
	int count=0;
	while(temp != NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void printinode(node *head, int i){
	node *temp =head;
	while(temp!=NULL){
		if(temp->data == i){
			cout<<temp->data;
		}
		else{
			temp=temp->next;
		}
	}
}


int main()
{
	/*node n1(10);
	node *head = &n1;

	node n2(20);
	node n3(30);
	node n4(40);
	node n5(50);

	n1.next= &n2;
	n2.next= &n3;
	n3.next= &n4;
	n4.next= &n5; */
	node *head=takeInput();
	cout<<"linked list is :"<<endl;
	print(head);
	cout<<"Length of LL IS: "<<length(head)<<endl;
	int i;
	cout<<"Enter the value of i: "<<endl;
	cin>>i;
	cout<<"Node at ith value is : ";
	printinode(head,i);

	/*
	node *n3= new node (30);
	node *n4= new node(40);
	n3->next = n4;
	*/
	return 0;
}
