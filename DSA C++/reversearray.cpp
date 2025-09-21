#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int start=0,end=3;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<4; i++){
        cout<<arr[i];
    }
}