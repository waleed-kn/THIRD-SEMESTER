#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    for (int i=0; i<5; i++){
        cout<<"index"<<i<<"="<<arr[i]<<endl;
    }
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    cout<<"sum "<<sum<<endl;

}