#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>S;
    S.push(6);
    S.push(7);
    S.push(3);
    cout<<S.size()<<endl;
    cout<<S.top()<<endl;
    S.pop();
    cout<<S.empty()<<endl; 

}