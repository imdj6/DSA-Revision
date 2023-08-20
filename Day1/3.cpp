#include <iostream>
using namespace std;
bool checkpalindrome(int i,string str,int n){
    //base case
    if(i>n){
        return true;
    }
    if(str[i]!=str[n]){
        return false;
    }
    checkpalindrome(i+1,str,n-1);
}
int main()
{
    string str="aaabbaaa";
    int i=0,n=str.size()-1;
    cout<<"palindrome or not::"<<checkpalindrome(i,str,n);


    return 0;
}