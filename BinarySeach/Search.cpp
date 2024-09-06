#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
           int start=0;
           int end=n-1;
           int mid;
           while(start<=end){
            
            //Mid 
            mid=(start+end)/2;
            
            //if mid == Array
            if(arr[mid]==key)
            return mid;
            else if(arr[mid]<key)
            start=mid+1;
            else
            end=mid-1;
           }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<BinarySearch(arr,6,3);
}