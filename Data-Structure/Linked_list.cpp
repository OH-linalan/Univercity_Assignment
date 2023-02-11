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
        Node* prev;
        Node(){
            this->next=NULL;
            this->prev=NULL;
        }
        Node(T val){
            this->next=NULL;
            this->prev=NULL;
            this->value = val;
        }
};
template <typename T>
class List{
    private:
       Node<T> *head;
       Node<T> *tail;
    public:
    List(void){
        this->head=NULL;
        this->iterator = this->head;
    }
    void push(T value){
        //head가 가리키는 노드 앞에 새 노드 추가
        if(this->head==NULL){
            Node<T> *newNode = new Node<T>(value)*;
            tail = NULL;
            this->head = newNode;
            newNode->next = tail;
        }
        Node<T> *newNode = new Node<T>(value)*;
        newNode->next = &this->head;
        &this->head->prev=newNode;
        this->head = newNode;
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
