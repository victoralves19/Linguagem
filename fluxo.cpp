#include <iostream>
#include <iomanip>

float CalcularPorcentagem(float n1, float n2) {
    return (n1 / n2) * 100.0;
}

int main() {
    float n1, n2;

    while (true) {
        std::cout << "Entre com o primeiro valor: ";
        std::cin >> n1;

        std::cout <<"Entre com o segundo valor: ";
        std::cin >> n2;

        if (n1 < n2) {
            float porc = CalcularPorcentagem(n1, n2);
            std::cout << std:: fixed << std::setprecision(2) << porc << "%" << std::endl;

            break;
        } else {
            std::cout << "Erro! Entre com um primeiro valor menor ou igual ao segundo." << std::endl;
            }
    }

    return 0;
}