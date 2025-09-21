#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        cout<<"step"<<i+1<<"checking array"<<i<<"]"<<arr[i]<<endl;
        if(arr[i]==key){
            cout<<"element dound at in index"<<i<<endl;
            return i;
        }
    }
    cout<<"element not foun in array "<<endl;
    return -1;
}
int main()
{
    int arr[]={5,6,2,7,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    cout<<"linaer search steps <<"<<endl;
    linearsearch(arr, n, key);
}