#include <iostream>
using namespace std;
#define SIZE 100

template <class Qtype>
class q_type{
    Qtype queue[SIZE];
    int head, tail;
public:
    q_type() { head = tail = 0; }
    void q(Qtype num){
        if(tail+1==head || (tail+1==SIZE && !head)){
            cout << "Queue is full." << endl;
            return;
        }
        tail++;
        if(tail==SIZE){
            tail = 0;}
        queue[tail] = num;
    }
    Qtype deq() {
        if(head == tail)
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        head++;
        if(head==SIZE)
            head = 0;
        return queue[head];
    }
};


int main(){
    q_type<int> q1;
    q_type<char> q2;
    int i;
    for(i=1; i<=10; i++)
    {
        q1.q(i);
        q2.q(i-1+'A');
    }
    for(i=1; i<=10; i++)
    {
        cout << "Dequeue 1: " << q1.deq() << endl;
        cout << "Dequeue 2: " << q2.deq() << endl;
    }
    return 0;
}

