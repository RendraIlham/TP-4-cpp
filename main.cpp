#include "list.h"
#include <iostream>

using namespace std;

int main() {
   List L;
   address p;
   int a;

   createList(L);

   cout << "Angka pertama: ";
   cin >> a;

   p = allocate(a);
   insertFirst(L, p);
   printInfo(L);

   cout << "Angka kedua: ";
   cin >> a;

   p = allocate(a);
   insertFirst(L, p);
   printInfo(L);

   cout << "Angka ketiga: ";
   cin >> a;

   p = allocate(a);
   insertFirst(L, p);
   printInfo(L);

   return 0;
}
