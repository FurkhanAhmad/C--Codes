#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int i=0;
    int n=7;
    int j=n-1;
    int target=9;
    while(i<j){
        
        int sum=arr[i]+arr[j];
        if(sum<target){
            i++;

        }
        else if(sum>target){
            j--;
        }
        else{
          return -1;
        }
          cout<<i<<" "  <<j<<" ";
    }

}