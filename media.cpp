#include <iostream>
#include <iomanip>

float CalcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    float n1, n2, n3;

    std::cout << "Entre com a nota da unidade 1: ";
    std::cin >> n1;

    std::cout << "Entre com a nota da unidade 2: ";
    std::cin >> n2;

    std::cout << "Entre com a nota da unidade 3: ";
    std::cin >> n3;

    float media = CalcularMedia(n1, n2, n3);
    
    std::cout << "Média: " << std::fixed << std::setprecision(2) << media << std::endl;

    return 0;
}