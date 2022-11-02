#include<iostream>
#include<climits>
#include<stdlib.h>
#include<iomanip>

using namespace std;
class Node{
    private:
        double data; 
        Node* next;

    public:
        Node():data(0), next(nullptr){};
	    Node(int d):data(d), next(nullptr){};
        Node(double d):data(d), next(nullptr){};
        friend class LinkedList;
};

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList():head(0){};
        void print_list();
        void add_node(double x);
        void insertion_sort();
};
void LinkedList::print_list(){
    if(head == nullptr){
        cout << "List is empty." << endl; 
        return;
    }
    Node* ptr;
    for(ptr=head; ptr->next!=nullptr; ptr=ptr->next){
        cout << setprecision(3) << ptr->data << " -> ";
    }
    cout << ptr->data << endl;
};

void LinkedList::add_node(double x){
    Node *newNode = new Node(x);
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node *ptr;
    for(ptr=head; ptr->next!=nullptr; ptr=ptr->next);
    ptr->next = newNode;
};



void LinkedList::insertion_sort(){
        // as new head
        Node* helper = new Node(INT_MIN);
        
        //insert value to right site in new LL
        while (head) {
            Node* iter = helper;
            while (iter->next && iter->next->data < head->data) {
                iter = iter->next;
            }
            Node* next = head->next;
            head->next = iter->next;
            iter->next = head;
            head = next;
        }

        head = helper->next;
};


int main(){
    double testarr[] = {6, 1, 3, 5, 2, 4, 80, 56, 0.2, -1};
    LinkedList ll;
    int i, n;
    n = (int)(sizeof(testarr)/sizeof(testarr[0]));
    //array to LL
    for(i=0; i<n; i++){
        ll.add_node(testarr[i]);
    };
    cout << "unsort LL: " << endl;
    ll.print_list();
    ll.insertion_sort();
    cout << "sorted LL: " << endl;
    ll.print_list();

    return 0;
}