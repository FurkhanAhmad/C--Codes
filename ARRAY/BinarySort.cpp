    #include<iostream>
    using namespace std;
    void binSort(int A[], int N)
    {
     
         int x=0;
        for(int i=1;i<N;i++) {
            if(A[i]==0) {
                swap(A[i],A[x]);
                x++;
            }
        }
    }
    int main(){
        int A[]={1, 0, 1, 1, 0};
        binSort(A,5);
        for(int i=0;i<5;i++){
           cout<<A[i]<<" ";
        }
    }