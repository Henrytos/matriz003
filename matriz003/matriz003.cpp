#include <iostream>
using namespace std;
//3) Faça um programa em Linguagem C que leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
int main()
{
    double matriz[6][6];
    int lin, col;
    for (lin = 0; lin < 6; lin++) {
        for (col = 0; col < 6; col++) {
            cout << "digite um valor: ";
            cin >> matriz[lin][col];
        }
    }
    cout << "      ARRAY\n";
    for (lin = 0; lin < 6; lin++) {
        for (col = 0; col < 6; col++) {
            if (col < 5) {
                cout << matriz[lin][col] << " ";
            }
            else {
                cout << matriz[lin][col] << endl;
            }
        }

    }
    cout << "os numero maiores que 10\n";
    for (lin = 0; lin < 6; lin++) {
        for (col = 0; col < 6; col++) {
            if (matriz[lin][col] > 10)
            {
                cout << " eh: " << matriz[lin][col] << endl;
            }
        }
    }
}