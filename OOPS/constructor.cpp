#include<iostream>
using namespace std;
 class Student{
    public:
    string name;
    int rno;
    float gpa;
 
Student(string s,int r,float g){
    name=s;
    rno=r;
    gpa=g; 
}
};
int main(){
   Student s1("Raghav",76,8.2);
   Student s2("aqib",88,6.2);
   cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
}