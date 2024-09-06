#include<iostream>
using namespace std;
int main(){
int target=4;
int position=0;
int arr[]={1,2,3,5,8};
for(int i=0;i<5;i++){
if(arr[i]<target){
         position++;
}
}
cout<<position;
}