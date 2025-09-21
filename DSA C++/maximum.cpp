#include<iostream>
using namespace std;
int main()
{
    int arr[4]={23,45,32,89};
    int max=arr[0];
    for(int i=0; i<4; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum is "<<max<<endl;
}