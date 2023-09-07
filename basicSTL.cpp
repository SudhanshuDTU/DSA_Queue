#include<queue>
#include<iostream>
using namespace std;
int main(){
    //create a queue
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(9);

 cout << "size of queue is "<< q.size()<<endl;
  
  //remove first element
  q.pop();  // removes 5

//check empty
if(!q.empty()){
    cout<<"empty nhi hai"<<endl;
}

//last element of queue
cout<<q.back()<<endl;
//first element of queue
cout<<q.front()<<endl;



    return 0;
}
