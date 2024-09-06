#include<iostream>
#include<vector>
using namespace std;
 void segregateElements(vector<int>& arr) {
        // Your code goes here
         int n = arr.size();

        // Create an empty vector to store result
        vector<int> temp(n);

        // Traverse array and store positive elements in temp array
        int j = 0; // index of temp
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                temp[j++] = arr[i];
            }
        }

        // Store negative elements in temp array
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp[j++] = arr[i];
            }
        }

        // Copy contents of temp[] to arr[]
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
        for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";
        }
    }
    int main(){
        vector<int>arr;
        arr.push_back(1); 
        arr.push_back(-1);
         arr.push_back(3);
        arr.push_back(2);
        arr.push_back(-7); 
        arr.push_back(-5);
        arr.push_back(11);
        arr.push_back(6);
        segregateElements(arr);
    }