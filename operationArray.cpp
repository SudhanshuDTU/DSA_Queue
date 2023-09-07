#include<iostream>
using namespace std;

class queue{
    int*arr;
    int front;
    int rear;
    int size;
public:
  queue(){
    size = 10001;
    arr = new int[size];
    front = 0;
    rear =0;
  }

void  push(){
    //if queue is full
    if(rear == size){
        cout<<"queue is full";
    }else{
      //   arr[rear] = data;
        rear++;
    }
  }

 int  pop(){
    int jodeleteHua = arr[front];
     if(front==rear){
        return -1;
     }
     else{
        
        arr[front] = -1;
        front++;
        if(front==rear){
            front = 0;
            rear=0; 
        }
        
     }
     return jodeleteHua;
   }

int front(){
     if(front==rear){
        return -1;
     }
     else{
        return arr[front];
     }
}

bool empty(){
    if(front==rear){
        return true;
     }
     else{
        return false;
     }
}

};