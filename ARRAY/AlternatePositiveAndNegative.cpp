#include<iostream>
#include<vector>
using namespace std;
	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos,neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0) pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
	    }
	    int i=0,j=0,k=0;
	    while(i<pos.size() and j<neg.size()){
	        arr[k++]=pos[i++];
	        arr[k++]=neg[j++];
	    }
	    //if positive greater than i..
	    while(i<pos.size()){
	        arr[k++]=pos[i++];
	    }
	    
	    // if ngative is greter j;
	    while(j<neg.size()){
	        arr[k++]=neg[j++];
	    }
        //print the alternating array...
        
         for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
	}
   
int main(){
      int arr[]={9, 4, -2, -1, 5, 0, -5, -3, 2};
      rearrange(arr,9);
}