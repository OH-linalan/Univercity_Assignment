#include <iostream>
// 1. int 형의 list를 단일, 이중, 순환 리스트로 구현한다.
// 2. 템플릿으로 확장한다.
using namespace std;
class Node{
public:
    int Data;
    Node* next;

    Node(){}
    Node(int value){
        this->Data = value;
    }
    ~Node(){}
};
class SLL{
private:
    Node* head;
public:
    SLL(){
        head = new Node();
        head->next = NULL;
    }
    //끝을 찾아주는 함수
    Node* findend(){
        Node* cur = head;
        while(cur->next!=NULL){
            cur = cur->next;
        }
        return cur;
    }
    //노드 삽입
    void insertfirst(int value){
        Node* n = new Node(value);
        n->next = head->next;
        head->next = n;
    }
    void insertend(int value){
        Node* cur = this->findend();
        Node* n = new Node(value);
        cur->next=n;
        n->next = NULL;
    }
    //리스트 출력
    void display(){
        Node* cur = head->next;
        if(head->next==NULL){
            cout<<"list가 비었습니다."<<endl;
        }
        while(cur->next!=NULL){
            cout<<" "<<cur->Data;
            cur = cur->next;
        }
        cout<<" "<<cur->Data;
    }
    //노드 탐색
    int search(int value){//위치 반환
        Node* cur = head->next;
        int i=1;
        while(cur->next!=NULL){
            if(cur->Data==value){
                return i;
            }
            i++;
            cur = cur->next;
        }
        if(cur->Data==value){
            return i;
        }
        return 0;//TODO: 오류 메세지 추가하기
    }
};
int main() {
    SLL* i = new SLL();
    i->insertend(4);
    i->insertend(7);
    i->insertfirst(2);
    i->insertend(5);
    i->insertfirst(6);
    i->insertend(9);
    i->display();
    cout<<i->search(2)<<endl;
    cout<<i->search(9)<<endl;
    return 0;
}
