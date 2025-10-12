#include<iostream>

struct Node
{
    int value;
    Node* next;
    Node(int val){
        this->value = val;
        this->next = nullptr;
    }
};

void addNodeToEnd(Node*& head, int addNum){
    Node* addNode = new Node(addNum);
    if (head == nullptr)
    {
        head = addNode;
        return;
    }
    
    Node* traversalNode;
    traversalNode = head;
    while (traversalNode!= nullptr)
    {
        traversalNode = traversalNode ->next;
    }
     traversalNode->next = addNode;
}



int main(){
    // int a = factorialNumber(5);
    // int a;
    // std::cin >> a;
    // int n = fibonacci(a);
    // std::cout << n << std::endl;
    Node* firstNode = new Node(10);
    addNodeToEnd(firstNode, 20);
    addNodeToEnd(firstNode, 20);
    addNodeToEnd(firstNode, 30);
    addNodeToEnd(firstNode, 40);


    Node* usedNode;
    usedNode = firstNode;
    while (usedNode != nullptr)
    {
        std::cout << usedNode -> value << std::endl;
        usedNode = usedNode->next;
    }
}