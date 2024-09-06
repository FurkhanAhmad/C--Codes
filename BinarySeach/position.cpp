#include<iostream>
using namespace std;
int Position(int arr[],int target){
    int start=0,end=4,position=0,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            position=mid;
            break;

        }
        else if(arr[mid]<target)
        start=mid+1;

    }
    else
    {
    ans=mid;
    end=mid-1;
    }
}
    int main(){
    int arr[]={1,2,5,6};
    Position(arr,5);
}