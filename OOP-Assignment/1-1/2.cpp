#include<iostream>
using namespace std;
long result;
void plus_(long num1,long num2){
result=num1+num2;
}
int main(){
long num1,num2;
cout<<"num1: ";
cin>>num1;
cout<<"num2: ";
cin>>num2;
plus_(num1,num2);
cout<<result;
}
