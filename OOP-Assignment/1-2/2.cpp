#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"num : ";
    cin >> num ;
    if(num<=0||num>=20){
        return 0;
    }
    int i=1;
    while(i<=20){
        cout<<" "<<i;
      if(i%num==0){
          cout<<endl;
      }
      i++;
    }
    return 0;
}
