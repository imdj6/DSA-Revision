#include <iostream>
#include <stack>
using namespace std;
void pushtosorted(stack<int> &st,int &target){
  //base condition
  if(st.empty()){
    st.push(target);
    return;
  }
  if(st.top()>=target){
    st.push(target);
    return;
  }
  //recusive calls
  int number=st.top();
  st.pop();
  pushtosorted(st,target);
  //backtracing call
  st.push(number);
}
void reversestack(stack<int> &st){
  if(st.empty()){
    return;
  }
  int number=st.top();
  st.pop();
  reversestack(st);

  //backtracking call
  pushtosorted(st,number);
}
int main()
{
  stack<int> st;
  st.push(7);
  st.push(11);
  st.push(3);
  st.push(5);
  st.push(9);

  int target=5;
  //insert target to stack so that stack remains sorted

  reversestack(st);

  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }

  return 0;
}