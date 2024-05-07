#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Digite sua idade: \n"; // Tem que pedir a idade do utilizador
    cin >> y;
    
    if (y >= 18 && y < 65) { // Se tiver entre 18 e 65
        cout << "Eleitor: Seu voto é obrigatório\n"; 
    }
    
    if (y == 17 || y == 16 || y >= 65) { // Se o utilizador tiver 16,17 ou mais de 65 anos
        cout << "Eleitor: Seu voto é facultativo\n";
    }
    
    if (y <= 15) {
        cout << "NÃO ELEITOR\n"; // Se ele for menor de 15 anos
    }

    return 0;
}
