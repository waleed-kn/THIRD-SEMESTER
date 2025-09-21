#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* address;

};
node* head=NULL;
node* tail=NULL;
void insertatlast(int element){
    node* c=new node();
    c->data=element;
    c->address=NULL;

    if(head==NULL){
        head=c;
        tail=c;
    
    }
    else{
        tail->address=c;
        tail=c;
    }
}
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->address;
        }
    }

int main()
{
    insertatlast(5);
    insertatlast(6);
    insertatlast(8);
    display();
}