#include <iostream>

using namespace std;

int main(){
    char cmd;
    int x=0;
    int y=0;
    int i=0;
    int j=0;
    while(true){
        while(i<3){
            j=0;
            while(j<3){
                if(j==x&&i==y){
                    cout<<" X";
                    j++;
                    continue;
            }
            cout<<" 0";
            j++;
            }
            cout<<endl;
            i++;
        }
        i=0;
        j=0;
        cout<<"command : ";
        cin >>cmd;
        switch (cmd){
            case 'a':{
                if(x==0){
                    continue;
                }
                x = x - 1;
                break;
            }
            case 'w':{
                if(y==0){
                    continue;
                }
                y = y - 1;
                break;
            }
            case 'd':{
                if(x==2){
                    continue;
                }
                x = x + 1;
                break;
            }
            case 's':{
                if(y==2){
                    continue;
                }
                y = y + 1;
                break;
            }
            case 'q':{
                exit(0);
                break;
            }
            default:{
                continue;
                break;
            }
        }
        
    }
    return 0;
}
