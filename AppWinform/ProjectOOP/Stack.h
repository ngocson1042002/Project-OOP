#ifndef Stack_h
#define Stack_h
#include<iostream>

template <class T>
struct Node
{
    T val;
    Node* next;
    Node() {}
    Node(T data, Node* next = nullptr) : val(data), next(next) {}
};

template <class T>
class Stack {
private:
    Node<T>* pHead;
    int count;
public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    void push(T);
    void pop();
    T top();
    bool empty();
    int size();
};

template <class T>
Stack<T>::Stack() : pHead(nullptr), count(0) {}

template <class T>
Stack<T>::Stack(const Stack& scr)
{
    this->count = scr.count;
    pHead = new Node<T>(scr.pHead->val);
    Node<T>* temp = scr.pHead->next;
    while (temp)
    {
        push(temp->val);
        temp = temp->next;
    }
}

template <class T>
bool Stack<T>::empty()
{
    return (pHead == nullptr);
}

template <class T>
void Stack<T>::push(T x)
{
    Node<T>* p = new Node<T>(x, pHead);
    pHead = p;
    count++;
}

template <class T>
void Stack<T>::pop()
{
    if (empty())
    {
        std::cout << "Empty Stack!" << std::endl;
        exit(0);
    }
    Node<T>* temp = pHead;
    pHead = pHead->next;
    delete temp;
    count--;
}

template <class T>
T Stack<T>::top()
{
    if (empty())
    {
        std::cout << "Empty Stack!" << std::endl;
        exit(0);
    }
    return pHead->val;
}

template <class T>
Stack<T>::~Stack()
{
    while (!empty())
        pop();
    pHead = nullptr;
}

template <class T>
int Stack<T>::size()
{
    return count;
}

#endif