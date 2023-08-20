#include <iostream>
#include <stack>
using namespace std;
void findMiddle(stack<int> &s,int &totalSize){
    //base condition
    if(s.size()==(totalSize/2)+1){
        cout<<"The middle element is "<<s.top();
        return;
    }
    int temp=s.top();
    s.pop();
    findMiddle(s,totalSize);

    //backtrack
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize=s.size();

    findMiddle(s,totalSize);



    return 0;
}