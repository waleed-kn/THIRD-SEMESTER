#include<iostream>
using namespace std;
int main()
{
    int arr[5]={12,20,30,40,50};
    int key=40;
    bool found=false;
    for(int i=0; i<5; i++){
        if(arr[i]==key){
            cout<<"element found at "<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"element are found"<<endl;
    }
}