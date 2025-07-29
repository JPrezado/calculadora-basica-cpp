#include <iostream>
#include <string>

using namespace std;

int main() {
    double num1, num2;
    char operacao;
    cout << "Digite o primeiro número: ";
        cin >> num1;

    cout << "Digite o segundo número: ";
        cin >> num2;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;

    double resultado;

    if (operacao == '+') {
        resultado = num1 + num2;
    } else if (operacao == '-') {
        resultado = num1 - num2;
    } else if (operacao == '*') {
        resultado = num1 * num2;
    } else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 1;
        }
    } else {
        cout << "Operação inválida!" << endl;
        return 1; 
    }
    
    cout << "O resultado é: " << resultado << endl;
    
    return 0;
}