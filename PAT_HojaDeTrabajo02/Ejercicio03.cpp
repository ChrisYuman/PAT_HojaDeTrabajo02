#include "Ejercicio03.h"
#include <stack>

int Ejercicio03::calculate(string s)
{
    std::stack<int> numeros;
    int numero = 0;
    char operacion = '+';

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (isdigit(c)) { //si en un caso es decimal multiplicamos por 10 para convertirlo
            numero = numero * 10 + (c - '0');
        }

        if ((!isdigit(c) && c != ' ') || i == s.length() - 1) {
            if (operacion == '+') {
                numeros.push(numero);
            }
            else if (operacion == '-') {
                numeros.push(-numero);
            }
            else if (operacion == '*') {
                int top = numeros.top();
                numeros.pop();
                numeros.push(top * numero);
            }
            else if (operacion == '/') {
                int top = numeros.top();
                numeros.pop();
                numeros.push(top / numero);
            }
            operacion = c;
            numero = 0;
        }
    }

    int resultado = 0;
    while (!numeros.empty()) {
        resultado += numeros.top();
        numeros.pop();
    }

    return resultado;
}
