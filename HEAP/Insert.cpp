#include<iostream>
using namespace std;
class MaxHeap{

    int *arr;
    int size; //Total element in Heap jo insert honge
    int total_size; //Total size of array jo H1(6) se aa chuka hai.

    public:

    MaxHeap(int n){
        arr=new int[n];
        size=0;
       total_size =n;
    }

    //insert into the Heap

    void insert(int value) 
    {
        // if heap size is available or not

        if(size==total_size)
        {
            cout<<"heap overlow\n";
            return;
        }
        arr[size]=value;
        int index=size;
        size++;
        
        //compare it with its parent

        while(index>0&&arr[(index-1)/2]<arr[index])
        {
            swap(arr[index],arr[(index-1)/2]);
            index=(index)/2;
        };
        cout<<arr[index]<<"is inserted inot the heap\n";
    

    }
    void print(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
     H1.insert(14);
      H1.insert(11);
      H1.insert(114);
      H1.insert(24);
      H1.insert(10);
      H1.print();

H1.print();

}
