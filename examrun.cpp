#include<iostream>
using namespace std;
class Aniket {
public:
string name;
int roll;
string perform;

Aniket(string n, int r, string p){
name=n;
roll=r;
perform=p;
}

};
class Sadgir{
   public: 
    float balance;
    
  string accname;

  Sadgir(float b, string ac){
    balance=b;
    accname=ac;

  }


};
void print(Sadgir s){
    cout<<"name :"<<s.balance<<"\n Roll no :"<<s.accname<<endl;
}
void print(Aniket a){
    cout<<"name :"<<a.name<<"\n Roll no :"<<a.roll<<"\n Perform :"<<a.perform<<endl;

}


int main(){
    Aniket a1("Aniket", 34, "AI Engr");
    Aniket a2("Anikefghgt", 384, "AI Engrf");
    print(a1);
    print(a2);
    
    Sadgir s1(34, "AI Engr");
    Sadgir s2(384, "AI Engrf");
    print(a1);
    print(a2);
    return 0;
}