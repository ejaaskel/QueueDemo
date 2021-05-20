#ifndef MyQueue_h
#define MyQueue_h

#include <queue>

template <class T>
class MyQueue {

    public:
        MyQueue() {
        }

        ~MyQueue() {
        }

        void queue(T data){
            q.push(data);
        }

        void dequeue(){
            q.pop();
        }

        T peek() {
            return q.front();
        }

    private:
        std::queue<T> q;

};

#endif
