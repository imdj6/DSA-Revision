#include <iostream>
#include <algorithm>
using namespace std;
bool checkPalindrome(string str){
    int s=0,e=str.size()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    string str="geeks";
    reverse(str.begin(),str.end());
    cout<<str;
    bool value=checkPalindrome(str);
    if(value){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }

    return 0;
}