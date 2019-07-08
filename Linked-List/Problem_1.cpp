// #pragma once -> 중복 include하는 것을 막는 것
#include <iostream>

using namespace std;

struct Node
{
    int data; // 데이터 저장 공간
    struct Node *next; // 다음 노드의 연결을 위한 포인터
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;
    Node *newNode = NULL;

    int readData;

    while(1)
    {
        cout << "자연수 입력 : ";
        cin >> readData;
        if(readData < 1)
            break;

        newNode = new Node();
        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }

    cout << endl;

    cout << "저장된 데이터 전체 출력 :";
    if(head == NULL){

        cout << "저장된 값 없음" <<endl;
    }
    else{
        cur = head;
        cout << cur->data << " ";

        while(cur->next != NULL){
            cur = cur->next;
            cout << cur->data << " ";
        }
    }
    cout << "\n\n";

    if(head == NULL)
        return 0;

    else{
        Node *delNode = head;
        Node *delNextNode = head->next;

        cout << head->data << "을 삭제합니다." << endl;
        free(delNode);

        while(delNextNode != NULL){
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            cout << delNode->data << "을 삭제합니다" << endl;
            free(delNode);

        }
        
    }

}

