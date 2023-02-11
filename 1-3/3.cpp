// 파일 “Assignment.txt”로부터 임의의 영단어(최대 100개)를 입력 받아 
// 길이별로 출력하는 프로그램을 구현하시오. 
// 영단어는 최대 20의 길이를 가지며 문자열의 길이는 
// 문자열의 길이를 구하는 함수를 직접 구현해서 구한다.
//Headers
#include <iostream>
#include <fstream>

//Namespace
using namespace std;

//Global Variable
char* File_Route = "assignment_3.txt";
//Functions - Define
void str_length(const char* str);//문자열의 길이를 구함
void file_extraction();//파일로부터 문자열을 추출

//Main
int main () { 
    file_extraction();
    return 0;
}

//Functions - Body
void str_length(const char* str){
    int i=0;
    int count=0;
    while(true){
        if(str[i]==NULL){
            break;
        }
        count++;
        i++;
    }
    cout<<str<<"'s length = "<<count<<endl;
}

void file_extraction(){
    ifstream f;
    f.open(File_Route);
    char str[20];
    if(f.is_open()==false){
        cout<<"Error : Unable to open file."<<endl;
        return;
    }
    while(!f.eof()){
        f>>str;
        str_length(str);
    }
    cout<<"End of file";
    f.close();
}