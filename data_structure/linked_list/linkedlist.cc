#include <iostream>

using namespace std;
class LinkedList;


class Node{
	private:
    int data;
    Node* next;

	public:
    Node():data(0), next(nullptr){};
	Node(int a):data(a), next(nullptr){};
    

    friend class LinkedList;

};
class LinkedList{
    private:
	Node* first;

    public:
	LinkedList():first(0){};
    void print_list();
    void push_head(int x);
    void push_end(int x);
    void clear();
    //void insert(int ind, int x);
    void reverse();
    int count();
};

void LinkedList::print_list(){
    if(first == nullptr){
        cout << "List is empty." << endl; 
        return;
    }
    Node* ptr;
    for(ptr=first; ptr!=nullptr; ptr=ptr->next){
        cout << ptr->data << endl;
    }
};

void LinkedList::push_end(int x){
    Node* newNode = new Node(x);

    if(first == nullptr){
        first = newNode;
        return;
    }
    
    Node* ptr;
    for(ptr=first; ptr->next!=nullptr; ptr=ptr->next){}
	ptr->next = newNode;

};

void LinkedList::push_head(int x){
    Node* newNode = new Node(x);
    newNode->next = first;
    first = newNode;
};
    
int LinkedList::count(){
    Node* ptr;
    int i=0;
    for(ptr=first; ptr!=nullptr; ptr=ptr->next){i++;}
    return i;
};
// traverse 
void LinkedList::reverse(){
	Node* ptr, now, n, p, newhead;
	//at least 2 element

	//if 2 element
	p = first;
    n = first->next;
    first->next=nullptr;
    p->next = n;
	//for(ptr=n->next; ptr!=nullptr; pt

    while(n!=null){

        n
    }
    for(ptr=first.next; ptr!=nullptr; ptr=ptr->next){
        
    }
	
}

void LinkedList::clear(){
    
    while(first!=nullptr){
        Node* ptr;
        first = first->next;
        delete ptr;
        ptr = nullptr;
    }
};
/*
void LinkedList::insert(int ind, int x){
    Node* ptr;
    Node* newNode = new Node(x);
    int i=0;
    for(ptr=first; ptr->next!=nullptr; ptr=ptr->next){i++;}
    //i=0 

    int i=0;
    if(first == nullptr){
        first = newNode;
        return;
    }

    for(ptr=first; ptr!=nullptr; ptr=ptr->next){

        if(i == ind){
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        //cout << ptr->data << endl;
        //cout << i << endl;

        i++;
    }
}*/


int main(){
	LinkedList ll;
    cout << ll.count() << endl;  
    ll.print_list();
    ll.push_end(5);
    ll.push_end(7);
    cout << ll.count() << endl;    
    //ll.insert(5, 6);
    ll.print_list();
    ll.clear();
    ll.print_list();

    return 0;
}