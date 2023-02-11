#include <iostream>

using namespace std;

int main(){
    int A,B;
    cout<<"A : ";
    cin >> A ;
    cout<<"B : ";
    cin >> B;
    if(A>B){
        cout<<"A > B";
    }
    else if(A<B){
        cout<<"A < B";
    }
    else{
        cout<<"A = B";
    }
    return 0;
}
