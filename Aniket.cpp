#include<iostream>
using namespace std;
int main() {
    int n,i,oddSum=0;
    cout<<"Enter N:"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        if(i%2!=0) {
            oddSum+=i;
           cout<<"odd number:"<<i<<endl;
        }
    }
    
     cout<<"----------\n"<<" Odd sum  "<<oddSum <<endl;
    return 0;
}
 