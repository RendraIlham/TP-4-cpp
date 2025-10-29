#include "list.h"
#include <iostream>

using namespace std;

void createList(List &L) {
    L.first = nullptr;
}

address allocate(infotype x) {
    address p = new elmlist;

    p->info = x;
    p->next = nullptr;

    return p;
}

void insertFirst(List &L, address p) {
    p->next = L.first;
    L.first = p;
}

void printInfo(List L) {
    address p = L.first;

    while (p) {
        cout << p -> info << ", ";
        p = p -> next;
    }

    cout << endl;
}
