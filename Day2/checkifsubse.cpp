#include <iostream>
using namespace std;
bool checksubsequence(string s1,string s2,int n,int m){
    int j=0;
    for (int i = 0; i < n && j<m; i++)
    {
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==m);
}
int main()
{
    string s1="GEEKSFORGEEKS";
    string s2="GRGES";
    bool result=checksubsequence(s1,s2,s1.size(),s2.size());
    if(result){
        cout<<"Is a Subsequence";
    }
    else{
        cout<<"Not a Subsequence";
    }

}