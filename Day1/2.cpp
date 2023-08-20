#include <iostream>
using namespace std;
void printNumber(int i,int n){
    //base case 
    if(i>n){
        return;
    }
    printNumber(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int i=0;
    int n=5;
    printNumber(i,n);
    return 0;
}