#include <iostream>

using namespace std;

void sort(int *input);

int main(){
    int a[20] = {1,10,4,5,17,19,13,18,15,11,20,2,3,6,9,7,8,12,14,16};
    sort(a);
    return 0;
}
void sort(int *input){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(input[j]>input[j+1]){
                int tmp = input[j];
                input[j]=input[j+1];
                input[j+1]=tmp;
                tmp = 0;
            }
        }
    }
    for(int k=0;k<20;k++){
        cout<<input[k]<<" ";
    }
    return ;
}
