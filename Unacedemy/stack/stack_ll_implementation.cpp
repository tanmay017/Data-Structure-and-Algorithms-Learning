#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Node
{
    T val;
    Node *next;
};

template <typename T>
class MyStack
{
    Node<T> *head;
    int size;

public:
    MyStack()
    {
        head = NULL;
        size = 0;
    }

    void push(T x)
    {
        Node<T> *temp = new Node<T>;
        temp->val = x;
        temp->next = head;
        head = temp;
        size++;
    }

    T pop()
    {
        if (size == 0)
        {
            cout << "Stack Underflow" << endl;
            return T();
        }
        else
        {
            Node<T> *temp = head;
            head = head->next;
            size--;
            T res = temp->val;
            delete (temp);
            return res;
        }
    }

    bool isEmpty()
    {
        return size == 0;
    }

    int getSize()
    {
        return size;
    }

    T top()
    {
        if (size == 0)
        {
            cout << "Size Underflow" << endl;
            return T();
        }
        else
            return head->val;
    }
};

int main()
{
    MyStack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}