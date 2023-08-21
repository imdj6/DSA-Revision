#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string str){
  stack<char> st;
  for(int i=0;i<str.size();i++){
    char ch=str[i];
    //opening bracket
    if(ch=='(' || ch=='{' || ch=='['){
      st.push(ch);
    }
    //closing bracket
    else{
      if(!st.empty()){
        char topch=st.top();
        if(ch==')' && topch=='('){
          st.pop();
        }
        else if(ch==']' && topch=='['){
          st.pop();
        }
        else if(ch=='}' && topch=='{'){
          st.pop();
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    }
  }
  if(st.empty()){
    return true;
  }
  else{
    return false;
  }
}
int main() {
  string str="{([])}";
  bool valid=isvalid(str);
  if(valid){
    cout<<"Valid parathesis"<<endl;
  }
  else{
    cout<<"Invalid paranthesis"<<endl;
  }

  return 0;
}