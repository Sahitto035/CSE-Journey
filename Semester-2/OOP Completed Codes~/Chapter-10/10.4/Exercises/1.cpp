# include <iostream>
using namespace std;
class List{
public :
    List * head ;
    List * tail ;
    List * next ;
    int num ;
    List () {
        head = tail = next = NULL ;
    }
    virtual void store (int i) = 0;
    virtual int retrieve () = 0;
};
class Queue : public List{
public :
    void store (int i) {
    List * item ;
    item = new Queue ;
    if (!item )
    {
        cout << " Allocation error" << endl;
        exit (1) ;
    }
    item->num = i;
    // put on end of list
    if( tail ) {
        tail-> next = item ;
    }
    tail = item ;
    item-> next = NULL ;
    if (! head ) {
        head = tail ;
    }
    }
    int retrieve () {
    int i;
    List *p;
    if (! head ){
        cout << " List empty." << endl;
        return 0;
    }
    i = head->num;
    p = head;
    head = head->next ;
    delete p;
    return i;
}

};
class Stack : public List{
public :
    void store (int i){
    List * item ;
    item = new Stack ;
    if (! item ){
        cout << "Allocation error." << endl;
        exit (1) ;
    }
    item->num = i;
    if( head ) {
        item-> next = head ;
    }
    head = item ;
    if (! tail ) {
        tail = head ;
    }
}
    int retrieve (){
    int i;
    List *p;
    if (! head ){
        cout << "List empty." << endl;
        return 0;
    }
    i = head->num;
    p = head ;
    head = head-> next ;
    delete p;
    return i;
    }
};
class Sorted : public List
{
public :
    void store (int i){
        List * item ;
        List *p, *p2;
        item = new Sorted ;
        if (! item ){
            cout << "Allocation error." << endl;
            exit (1) ;
        }
        item->num = i;
        p = head ;
        p2 = NULL ;
        while (p){
            if(p->num > i){
                item-> next = p;
                if(p2) {
                    p2-> next = item ;
                }
                if(p== head ){
                head = item ;
                }
            break ;
        }
        p2 = p;
        p = p->next ;
    }
    if (!p){
        if( tail )
            tail->next = item ;
        tail = item ;
        item->next = NULL ;
    }
    if (! head )
        head = item ;
    }
    int retrieve (){
    int i;
    List *p;
    if (! head ){
        cout << " List empty ." << endl;
        return 0;
    }
    i = head->num;
    p = head ;
    head = head-> next ;
    delete p;
    return i;
    }
};

int main (){
    List *p;
    Queue q_ob ;
    p = & q_ob ;
    p-> store (1);
    p-> store (2);
    p-> store (3);
    cout << " Queue: " << p-> retrieve () << " "  << p-> retrieve ()
         << " " << p-> retrieve () << endl;

    Stack s_ob ;
    p = & s_ob ;
    p->store (1);
    p->store (2);
    p->store (3);
    cout << " Stack: " << p-> retrieve () << " "  << p-> retrieve ()
         << " " << p-> retrieve () << endl;

    Sorted sorted_ob ;
    p = & sorted_ob ;
    p->store (4);
    p->store (1);
    p->store (3);
    p->store (9);
    p->store (5);
    cout << " Sorted: " << p-> retrieve () << " "  << p-> retrieve ()
         << " " << p-> retrieve () << endl;
    return 0;
}