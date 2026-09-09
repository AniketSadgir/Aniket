#include<iostream>
using namespace std;
class Home {
  public:
string name;
int mobileNo;
string qualification;

Home( string n, int m, string q){
name = n;
mobileNo = m;
qualification = q;
}
};
class Village{
public:
string name;
int people;
int familys;

Village(string name , int people, int familys){
    this->name=name;
    this->people=people;
    this->familys=familys;
}

};
void print(Home h){
    cout<<"\nName : "<<h.name<<"\nMobile No : "<<h.mobileNo<<"\nQualification : "<<h.qualification<<endl;
}
void print(Village v){
cout<<"\n Village Name : "<<v.name<<"\npeople No : "<<v.people<<"\nFamilys No : "<<v.familys<<endl;

}
int main(){

    Home h1("Aniket Sadgir",832693524, "AI Engr");
    Home h2("Abhi Sadgir",832693524, "Entc Engr");
    Home h3("Shanker Sadgir",832693524, "12th");

    Village v1("Akole", 12000, 300);
    Village v2("Sangamner",25143,623 );
    Village v3("Pune", 8965,851);
    
//     // cout<<"Name : "<<h1.name<<"\nMobile No : "<<h1.mobileNo<<"\nQualification : "<<h1.qualification<<endl;
//     // cout<<"\nName : "<<h2.name<<"\nMobile No : "<<h2.mobileNo<<"\nQualification : "<<h2.qualification<<endl;
//     // cout<<"\nName : "<<h3.name<<"\nMobile No : "<<h3.mobileNo<<"\nQualification : "<<h3.qualification<<endl;
//     // cout<<"\nVillage Name : "<<v1.name<<"\npeople No : "<<v1.people<<"\nFamilys No  : "<<v1.familys<<endl;
//     // cout<<"\nVillage Name : "<<v2.name<<"\npeople No : "<<v2.people<<"\nFamilys No : "<<v2.familys<<endl;

print(h1);
print(h2);
print(h3);
print(v1);
print(v2);
print(v3);
    return 0;
}