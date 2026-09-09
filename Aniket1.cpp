#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a marks: ";
    cin >> n;
  if (n>90 && n<=100){
    cout<<"grade:A"<<endl;
  } else if(n>=75 && n<= 90) {
    cout<<"Grade:B"<<endl;
  } else if(n>60 && n<75){
    cout<<"grade: C"<<endl;
  } else if(n>=35 && n<=60){
    cout<<"Grade:D"<<endl;
  } else if(n>=101){
    cout<<"marks doesn't exist"<<endl;
  } else {
    cout<<"fail"<<endl;
  }

    return 0;
}