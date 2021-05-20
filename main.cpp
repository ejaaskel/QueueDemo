#include <iostream>
#include <memory>

#include "MyQueue.h"

using namespace std;

void demoInt () {
    unique_ptr<MyQueue<int>> q (new MyQueue<int>());
    q->queue(1);
    q->queue(2);
    q->queue(3);
    cout << "First int value before removal: " << q->peek() << endl;
    q->dequeue();
    cout << "First int value after removal: " << q->peek() << endl << endl;
}

void demoDouble () {
    unique_ptr<MyQueue<double>> q (new MyQueue<double>());
    q->queue(1.3);
    q->queue(2.23451);
    q->queue(3.14);
    cout << "First double value before removal: " << q->peek() << endl;
    q->dequeue();
    cout << "First double value after removal: " << q->peek() << endl << endl;
}

void demoString () {
    unique_ptr<MyQueue<string>> q (new MyQueue<string>());
    q->queue("First");
    q->queue("Second");
    q->queue("Third");
    cout << "First string value before removal: " << q->peek() << endl;
    q->dequeue();
    cout << "First string value after removal: " << q->peek() << endl << endl;
}

void demoChar () {
    unique_ptr<MyQueue<char>> q (new MyQueue<char>());
    q->queue('a');
    q->queue('1');
    q->queue('b');
    cout << "First char value before removal: " << q->peek() << endl;
    q->dequeue();
    cout << "First char value after removal: " << q->peek() << endl << endl;
}

int main()
{
    cout << "Demoing int" << endl;
    demoInt();
    cout << "Demoing double" << endl;
    demoDouble();
    cout << "Demoing string" << endl;
    demoString();
    cout << "Demoing char" << endl;
    demoChar();
    return 0;
}
