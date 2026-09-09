#include<iostream>
using namespace std;
class Student {
    public:
string name;
int roll;
float cgpa;

Student(string s, int r, float g){
    name = s;
    roll = r;
    cgpa = g;

}

};
class Car {
    public:
string name;
int model;
string type;

Car(string n, int m, string t){
    name = n;
    model = m;
    type = t;

}

};

int main(){
    
Student s("Aniket", 12, 386);
Car c("BMW", 324, "electric");


cout<<c.name<<"\n"<<c.model<<"\n"<<c.type<<endl;
cout<<s.name<<"\n"<<s.roll<<"\n"<<s.cgpa<<endl;
}
