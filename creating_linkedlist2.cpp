#include<bits/stdc++.h>
using namespace std;

class node{
    public:

int data;
node *next;

// Constructor called
node(int data)
{
    this->data = data;
    this->next = NULL;
}};

void insert_at_head(node *&head,int data){

node *temp = new node(data);
temp->next = head;

head = temp;

}

void insert_at_tail(node *&tail , int data){

node *temp1 = new node(data);

tail->next = temp1;
tail = temp1;

}

void insert_in_between(node *& head , int position, int data){

node *temp = head;
node * insert = new node(data);

if(position == 1){
insert->next = temp;
head = insert;
return;
}

for(int i =2;i<position;i++)
{if(temp->next != NULL)
temp = temp->next;
}

insert->next = temp->next;
temp->next = insert;

}


void print_node(node *&head){
node*temp = head;
while(temp != NULL){

cout<<temp->data<<"   ";
temp = temp->next;

}
}

int main()
{
       
       node *node1 = new node(5);

node *head = node1;
node  *tail = node1;
// insert_at_head(head,234);
// insert_at_head(head,34);
// insert_at_head(head,24);
// insert_at_head(head,23);
   
  insert_at_tail(tail,234);
insert_at_tail(tail,34);
insert_at_tail(tail,24);
insert_at_tail(tail,23);

insert_in_between(head ,5,6724);


//print_node(head);
print_node(head);


  return 0;
}