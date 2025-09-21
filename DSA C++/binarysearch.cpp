#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int low =0;
    int high=n-1;
    int step=1;
    while(low<=high){
        int mid=(low+high)/2;
        cout<<"steps"<<step<<"checking arr{"<<mid<<"} "<<arr[mid]<<endl;
        if(arr[mid]==key){
            cout<<"element found at the index"<<mid<<endl;
            return mid;
        }
        else if(arr[mid],key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        step++;

    }
    cout<<"element not found in "<<endl;
    return -1;
}
int main()
{
    int arr[]={2,5,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    cout<<"binary search at steps"<<endl;
    binarysearch(arr,n,key);
}