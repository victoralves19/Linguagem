#include <iostream>
#include <iomanip>

int main() {
    float n = 0;
    float n1, n2, n3;
    float media;

    std::cout << "Entre com a nota da unidade 1: ";
    std::cin >> n1;
    n++;

    std::cout << "Entre com a nota da unidade 2: ";
    std::cin >> n2;
    n++;

    std::cout << "Entre com a nota da unidade 3: ";
    std::cin >> n3;
    n++;

    media = (n1 + n2 + n3) / n;

    std::cout << "Média: " << std::setprecision(3) << media << std::endl;

    return 0;
}