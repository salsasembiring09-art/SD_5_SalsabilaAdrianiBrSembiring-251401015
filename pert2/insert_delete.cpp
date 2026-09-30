#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;

};

node* head = NULL;
node* tail = NULL;

//fungsi insert linked list 
//1.insert first 
void insertFirst (int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
        tail = newnode;

    } else {
        newnode -> next = head;
        head = newnode;
    }
} 

//2.Insert last
void insertLast (int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL ){
        head = newnode ;
        tail = head;

    }else{
        tail -> next = newnode;
        tail = newnode;
    }
}    

//3.insert After
void insertAfter (int n, int check){
    if (head == NULL){
        cout << "List kosong!"<< endl;
        return;
    }

    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    node *p = head;
    while (p != NULL && p -> value != check){
        p = p -> next;

    }

    if (p == NULL ){
        cout << "Node dengan nilai " <<  check << "tidak ditemukan !" << endl; 
        delete newnode;
    }else{
        newnode -> next = p -> next;
        p -> next = newnode;
        if (p == tail){
            tail = newnode;
        }
    }
}

//fungsi delete pada linked list 
//1. delete first
void deleteFirst(){
    if(head == NULL){
        cout << "List kosong !" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;


}

//2.delete Last 
void deleteLast(){
    if(head == NULL){
        cout << "List kosong !" << endl;
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
         return;
    }

    node *p = head;
    while (p -> next != tail){
        p = p -> next ;

    }

    delete tail ;
    tail = p;
    tail -> next = NULL;
}

//3.delete middle
void deleteMiddle(int value){
    if (head == NULL){
        cout << "List kosong!" << endl;
          return;

    }

    node *p = head;
    while (p -> next != NULL && p -> next -> value !=check){
        p = p -> next;

    }

    if (p -> next == NULL){
        cout <<"Node dengan nilai " << check << " tidak ditemukan!\n";

    }else{
        node *temp = p -> next ;
        p -> next = temp -> next;
        if (temp == tail) tail = p;
        delete temp;
    }
}

int main(){
    system ("cls");

    insertFirst(10);
    display();
    insertFirst(5);
    display();
    insertLast(20);
    display();
    insertAfter(30,10);

    

}





