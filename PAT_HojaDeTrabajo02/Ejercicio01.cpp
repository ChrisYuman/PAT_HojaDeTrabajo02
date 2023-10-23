#include "Ejercicio01.h"

Node<char>* Ejercicio01::rotateRight(Node<char>* head, int k)
{
    if (!head || k == 0) {
        return head;
    }

    int longitud = 0;
    Node<char>* actualh = head;
    while (actualh) {
        longitud++;
        actualh = actualh->next;
    }

    k = k % longitud;
    if (k == 0) {
        return head;
    }

   
    int nuevaposicon = longitud - k;
    actualh = head;
    Node<char>* nuevap = nullptr;
    for (int i = 0; i < nuevaposicon; i++) {
        nuevap = actualh;
        actualh = actualh->next;
    }

    Node<char>* nuevoh = actualh;
    nuevap->next = nullptr;

    actualh = nuevoh;
    while (actualh->next) {
        actualh = actualh->next;
    }
    actualh->next = head;

    return nuevoh;
}
