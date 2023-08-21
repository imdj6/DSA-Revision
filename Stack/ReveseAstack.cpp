#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st,int &size,int &target){
  //base case
  if(st.empty()){
    st.push(target);
    return;
  }
  //recusive call 
  int number=st.top();
  st.pop();
  insertAtBottom(st,size,target);
  st.push(number);
}
void reverseAStack(stack<int> &st,int &size){
  //base case;
  if(st.empty()){
    return;
  }
  //recursive call
  int number=st.top();
  st.pop();
  reverseAStack(st,size);
  //insert At bottom
  insertAtBottom(st,size,number);
}
int main()
{
  stack<int> st;
  st.push(5);
  st.push(15);
  st.push(27);
  st.push(32);
  st.push(12);
  int size=st.size();
  reverseAStack(st,size);

  cout<<"Stack After Our Operation:"<<endl;
  while(st.size()){
    cout<<st.top()<<" ";
    st.pop();
  }
  //12 32 27 15 5 11




  return 0;
}