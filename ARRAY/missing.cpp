#include<iostream>
#include<vector>
using namespace std;
   int missingNumber(int n, vector<int> &arr) {
        int i, sum1 = 0;
         
         // Calculating the sum of all elements in the array
         for (i = 0; i < n - 1; i++)
             sum1+= arr[i];
        
         // Calculating the expected sum of a series from 1 to N
         int Sum2 = (n * (n + 1)) / 2;
        
         // Calculating the missing number by subtracting the sum of array elements from the expected sum
         return Sum2-sum1;
   }
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    cout<<missingNumber(3,arr);
}