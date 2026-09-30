#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// Menampilkan isi Queue
void display() {
    node* p = head;

    if (head == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    cout << "Isi Queue: ";

    while (p != NULL) {
        cout << p->value << " ";
        p = p->next;
    }

    cout << endl;
}

// ENQUEUE
// Menambahkan data ke belakang Queue
void enqueue(int n) {
    node* newnode = new node;

    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    }
    else {
        tail->next = newnode;
        tail = newnode;
    }

    cout << n << " masuk ke Queue." << endl;
}

// DEQUEUE
// Menghapus data dari depan Queue
void dequeue() {
    if (head == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    node* temp = head;

    cout << temp->value << " keluar dari Queue." << endl;

    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete temp;
}

int main() {
    system("cls");

    // Memasukkan data
    enqueue(10);
    display();

    enqueue(20);
    display();

    enqueue(30);
    display();

    enqueue(40);
    display();

    cout << endl;

    // Mengeluarkan data
    dequeue();
    display();

    dequeue();
    display();

    return 0;
}