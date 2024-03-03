#include <iostream>

int main() {
    // Utilizando la estructura for
    std::cout << "Utilizando la estructura for:" << std::endl;
    int sumFor = 0;
    int N = 5; // Puedes cambiar este valor según tus necesidades

    for (int i = 1; i <= N; ++i) {
        sumFor += i;
    }

    std::cout << "La suma de los primeros " << N << " números naturales es: " << sumFor << std::endl;

    // Utilizando la estructura while
    std::cout << "\nUtilizando la estructura while:" << std::endl;
    int sumWhile = 0;
    int j = 1;

    while (j <= N) {
        sumWhile += j;
        ++j;
    }

    std::cout << "La suma de los primeros " << N << " números naturales es: " << sumWhile << std::endl;

    // Utilizando la estructura do-while
    std::cout << "\nUtilizando la estructura do-while:" << std::endl;
    int sumDoWhile = 0;
    int k = 1;

    do {
        sumDoWhile += k;
        ++k;
    } while (k <= N);

    std::cout << "La suma de los primeros " << N << " números naturales es: " << sumDoWhile << std::endl;

    return 0;
}

