#include <iostream>
using namespace std;
class Stack{
public:
int * arr;
int size;
int top1;
int top2;
Stack(int size){
  arr=new int[size];
  this->size=size;
  top1=-1;
  top2=size;
}
//push1
void push1(int data){
  if(top1-top2==1){
    cout<<"Stack overflow in stack 1"<<endl;
  }
  else{
    top1++;
    arr[top1]=data;
  }
}
void push2(int data){
  if(top1-top2==1){
    cout<<"Stack overflow in stack 2"<<endl;
  }
  else{
    top2--;
    arr[top2]=data;
  }
}
void pop1(){
  if(top1==-1){
    cout<<"stack 1 is empty"<<endl;
  }
  else{
    top1=top1-1;
  }
}
void pop2(){
  if(top2==size){
    cout<<"stack 2 is empty"<<endl;
  }
  else{
    top2=top2+1;
  }
}
void print(){
  cout<<endl;
  cout<<"top1::"<<top1<<endl;
  cout<<"top2::"<<top2<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
};
int main() {
  Stack s(10);
  s.push1(10);
  s.print();
  s.push1(20);
  s.print();
  s.push1(30);
  s.print();
  s.push1(40);
  s.print();
  s.push1(50);
  s.print();

  s.push2(10);
  s.print();
  s.push2(20);
  s.print();
  s.push2(30);
  s.print();
  s.push2(40);
  s.print();
  s.push2(50);
  s.print();
  
  s.push1(10);
  s.push2(20);

 
  return 0;
}