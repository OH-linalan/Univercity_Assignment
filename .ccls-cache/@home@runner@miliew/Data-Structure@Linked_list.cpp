// Precondition
/*
 링크드 리스트 구현
 https://reakwon.tistory.com/25
 링크드 리스트 개념
https://blockdmask.tistory.com/76
stl 메소드
*/
// Headers
#include <iostream>

// Namespace & Tamplate
using namespace std;

// Class
class Node {
private:
    int _data;
    Node *_next;

public:
    Node() { 
        this->_next = NULL; 
    }
    Node(int value) {
        this->_next = NULL;
        this->_data = value;
    }
};

class SingleLinkedList {
    private:
        Node*_head;
    public:
        SingleLinkedList(){
            this->_head=NULL;
        }
        void listPush(int value){
            if(this->_head==NULL){
                Node*temp = new Node(value);
                
            }
        }
};
// Global Variable

// Functions - Define

// Main

// Functions - Body