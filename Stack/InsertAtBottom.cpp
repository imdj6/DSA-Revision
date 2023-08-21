#include <iostream>
#include <stack>
using namespace std;
void insertAtBotton(stack<int> &st,int &size,int &target){
  //base case
  if(st.empty()){
    st.push(target);
    return;
  }
  int number=st.top();
  st.pop();
  insertAtBotton(st,size,target);
  //backtracking
  st.push(number);
}
int main()
{
  stack<int> st;
  st.push(5);
  st.push(15);
  st.push(27);
  st.push(32);
  st.push(12);

  int target=11;
  int size=st.size();
  insertAtBotton(st,size,target);

  cout<<"Stack After Our Operation:"<<endl;
  while(st.size()){
    cout<<st.top()<<" ";
    st.pop();
  }
  //12 32 27 15 5 11




  return 0;
}