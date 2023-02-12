//Precondition
/*
 링크드 리스트 구현
 https://reakwon.tistory.com/25
 링크드 리스트 개념
https://blockdmask.tistory.com/76
stl 메소드
*/
//Headers
#include <iostream>

//Namespace & Tamplate
using namespace std;
template <typename T>

//Class
class Node{
    public:
        T value;
        Node* next;
        Node(){
            this->next=NULL;
            this->value=NULL;
        }
        Node(T val){
            this->next=NULL;
            this->value = val;
        }
};
template <typename T>
class SLL{
    //단일 연결 리스트
    private:
       Node<T> *head;
    public:
    SLL(void){
        Node<T> *tail = new Node<T>*;
        this->head=tail;
    }
    void push(T value){
        //head가 가리키는 노드 앞에 새 노드 추가
    }
    void pop(){
        //head가 가리키는 노드 삭제
    }
    void insert(int index, T value){
        //head에서 index 만큼 떨어진 노드 앞에 새 노드 추가
    }
    void remove(int index){
        //head에서 index만큼 떨어진 노드 삭제 
    }
    T getdata(int index){
        //head에서 index만큼 떨어진 노드의 값 반환
    }
};
//Global Variable

//Functions - Define

//Main
int main () { 
    
    return 0;
}

//Functions - Body
