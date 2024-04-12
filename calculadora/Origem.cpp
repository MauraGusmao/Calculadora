#include<iostream>

using namespace std;

void calculadora(float nmr1, float nmr2) {
    char op;
    cout << "digite um numero para ser calculado: " << endl;
    cin >> nmr1;
    cout << "digite o operador da conta: " << "+ " << "- " << "* " << "/ : ";
    cin >> op;
    cout << "digite outro numero para ser calculado: " << endl;
    cin >> nmr2;
    system("cls");


    switch (op) {
    case '+':
        cout << nmr1 + nmr2;
        break;
    case '-':
        cout << nmr1 - nmr2;
        break;
    case '/':
        cout << nmr1 / nmr2;
        break;
    case '*':
        cout << nmr1 * nmr2;
        break;
    default:
        cout << "invalido! ";

    }

}

int main()
{
    float nmr1;
    float nmr2;

    calculadora(nmr1, nmr2);

    return 0;
}
