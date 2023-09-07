#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *nextptr;
    node(int d)
    {
        data = d;
        nextptr = NULL;
    }
};
class queue
{
    node *head;
    node *tail;
    int length;
public:
    queue(){
        head =NULL;
        tail=NULL;
        length =0;
    }
    
    //push
   void push(int data){
        //if ll is empty
        if(head==NULL){
            node*p = new node(data);
            head =p;
            tail=p;
           
        }
        else{
            node*p = new node(data);
            tail->nextptr = p;
            tail = p;
        }
    }
    //pop
    void pop(){
        if(head==NULL){
            return;
        }
        else if(head->nextptr == NULL){
            delete head;
            head=NULL;
            tail=NULL;
        }
        else{
        node*temp = head->nextptr;
        delete head;
        head = temp;
        }
    }

    //size
    int size(){
        node*temp = head;
        int count=0;
        while(temp!=NULL){
        count++;
        temp=temp->nextptr;
        }
        return count;
    }

    //front
    int front(){
        return head->data;
    }

    //empty
    bool empty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    

    

};

int main()
{
queue q;
q.push(5);
q.push(7);

// while(!q.empty()){
// cout<<q.front()<<" ";
// q.pop();
// }
cout<<q.empty();
}