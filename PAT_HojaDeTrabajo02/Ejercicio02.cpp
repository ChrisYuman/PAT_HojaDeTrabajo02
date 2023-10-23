#include "Ejercicio02.h"

Node<int>* Ejercicio02::addTwoNumbers(Node<int>* l1, Node<int>* l2)
{
    Node<int>* headf = new Node<int>({ 0 });  
    Node<int>* actual = headf;
    int c = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int x = (l1 != nullptr) ? l1->value : 0;
        int y = (l2 != nullptr) ? l2->value : 0;
        int sum = c + x + y;
        c = sum / 10;
        actual->next = new Node<int>({ sum % 10 });
        actual = actual->next;
        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
    }

    if (c > 0) {
        actual->next = new Node<int>({ c });
    }

    return headf->next;
}
