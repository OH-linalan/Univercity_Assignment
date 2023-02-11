#include <iostream>
#include <string>
using namespace std;
void string_compare(string str1, string str2);
int main(){
    string str1;
    string str2;
    cout<<"str1 : ";
    cin>>str1;
    cout<<"str2 : ";
    cin>>str2;
    for(int i=0;i<str1.length();i++){
        tolower(str1[i]);
        tolower(str2[i]);
    }
    string_compare(str1, str2);
    return 0;
}
void string_compare(string str1, string str2){
    char temp;
    int ln = str1.length();
    for(int i=0;i<ln;i++){
        if(str1[i]>str2[i]){
            temp = str1[i];
            str1[i]= str2[i];
            str2[i]=temp;
        }
    }
    cout<<"str1 : "<<str1<<" "<<"str2 : "<<str2;
    return;
}
