#include <iostream>
#include <cmath>
using namespace std;

// Função para verificar se um ponto (x, y) pertence à reta y = mx + b
bool pontoPertenceAReta(float x, float y, float m, float b) {
    return y == (m * x + b);
}

int main() {
    float x1, y1, x2, y2; // Coordenadas dos pontos da reta
    cout << "Insira as coordenadas do primeiro ponto da reta (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Insira as coordenadas do segundo ponto da reta (x2, y2): ";
    cin >> x2 >> y2;
    
    // Calcular a inclinação (m) da reta
    float m = (y2 - y1) / (x2 - x1);
    
    // Calcular a interceptação (b) no eixo y
    float b = y1 - m * x1;
    
    // Coordenadas do ponto a ser verificado
    float x, y;
    cout << "Insira as coordenadas do ponto a ser verificado (x, y): ";
    cin >> x >> y;
    
    // Verificar se o ponto pertence à reta
    if (pontoPertenceAReta(x, y, m, b)) {
        cout << "O ponto (" << x << ", " << y << ") pertence à reta.\n";
    } else {
        cout << "O ponto (" << x << ", " << y << ") não pertence à reta.\n";
    }

    return 0;
}