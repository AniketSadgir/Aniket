#include<iostream>
using namespace std;
class Student {
    public:
string name;
int roll;
float cgpa;
};
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;

};
void print(Student s){
cout<<s.name<<"\n"<<s.roll<<"\n"<<s.cgpa<<endl;
}
void print(Car c){
cout<<c.name<<"\n"<<c.price<<"\n"<<c.seats<<"\n"<<c.type<<endl;
}
void change(Car &c){
  c.name="Fararii";
}
int main(){

    
    
    // Student s1;
    // s1.name="Aniket";
    // s1.roll=12;
    // s1.cgpa=8.5;

    // Student s2;
    // s2.name="sadgir";
    // s2.roll=22;
    // s2.cgpa=9.5;

    Car c1;
    c1.name="BMW";
    c1.price=150000;
    c1.seats=5;
    c1.type="brand";

    print(c1);
    change(c1);
    print(c1);
// print(c1);
// print(s1);
// print(s2);
}