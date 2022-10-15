
#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;

	node(int d){
		data = d;
		next = NULL;
	}
};


void insertAtTail(node *&head , int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail -> next != NULL){
        tail = tail -> next;
    }
    node * n = new node(data);
    tail -> next = n;
}

void print(node *head){
		node * temp = head;
		while(temp!=NULL){
			cout<<temp -> data<<" ";
			temp = temp->next;
		}
}

void buildList(node *&head){
    int data;
    cin>>data;

    while(data!=-1){
        insertAtTail(head,data);
        cin>>data;
    }
}



void kthNodeFromEnd(node *head,int pos){
    node * slow = head;
    node * fast = head;
    int jump = 1;
    while(jump<=pos){
        fast = fast -> next;
        jump++;
    }
    while(fast!=NULL){
        fast = fast -> next;
        slow = slow -> next;
    }
    cout<<slow->data<<endl;
}


int main() {
	node *head = NULL;
	buildList(head);
    int pos;
    cin>>pos;
    kthNodeFromEnd(head,pos);
	return 0;
}
