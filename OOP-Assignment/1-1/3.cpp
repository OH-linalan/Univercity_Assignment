#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"num1: ";
cin>>num1;
cout<<"num2: ";
cin>>num2;
cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
cout<<num1<<" / "<<num2<<" = "<<static_cast<float>(num1)/static_cast<float>(num2)<<endl;
}
