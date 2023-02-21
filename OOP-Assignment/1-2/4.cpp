#include <iostream>

using namespace std;

int sigma(int N, int sum);

int main(){
    int N;
    int sum;
    cout<<"N : ";
    cin>>N;
    sum = sigma(N,0);
    cout<<"sum = "<<sum;
    return 0;
}
int sigma(int N, int sum){
    if (N==0){
        return sum;
    }
    int pow_ = 1;
    int i = 0;
    while(i<N){
        pow_ = pow_ * 2;
        i++;
    }
    sum = (N*pow_)+sum;
    N--;
    return sigma(N,sum);
}
