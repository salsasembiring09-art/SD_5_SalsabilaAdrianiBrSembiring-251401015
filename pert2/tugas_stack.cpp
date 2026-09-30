#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;

// Menampilkan isi Stack
void display() {
    node* p = head;

    if (head == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    cout << "Isi Stack: ";

    while (p != NULL) {
        cout << p->value << " ";
        p = p->next;
    }

    cout << endl;
}

// PUSH
// Menambahkan data ke bagian atas Stack
void push(int n) {
    node* newnode = new node;

    newnode->value = n;
    newnode->next = head;

    head = newnode;

    cout << n << " masuk ke Stack." << endl;
}

// POP
// Menghapus data dari bagian atas Stack
void pop() {
    if (head == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    node* temp = head;

    cout << temp->value << " keluar dari Stack." << endl;

    head = head->next;

    delete temp;
}

int main() {
    system("cls");

    // Memasukkan data
    push(10);
    display();

    push(20);
    display();

    push(30);
    display();

    push(40);
    display();

    cout << endl;

    // Mengeluarkan data
    pop();
    display();

    pop();
    display();

    return 0;
}