#include <iostream>
#include <cmath>
using namespace std;


struct Node
{
    int value;
    Node* next;
    Node(int val){
        this->value = val;
        this->next = nullptr;
    }
};

void addNodeToEnd(Node*& head, int usedVal){
    Node* usedNode = new Node(usedVal);

    if(head == nullptr){
        head = usedNode;
        return;
    }
    
    Node* traversalNode;
    traversalNode = head;
    while(traversalNode->next != nullptr){
        traversalNode = traversalNode->next;
    }
    traversalNode->next = usedNode;
}

int main() {
    Node* newHead = nullptr;
    addNodeToEnd(newHead, 10);
    addNodeToEnd(newHead, 20);
    addNodeToEnd(newHead, 30);

    while (newHead != nullptr)
    {
        std::cout << newHead->value <<std::endl;
        newHead = newHead->next;
    }
    
    return 0;
}
