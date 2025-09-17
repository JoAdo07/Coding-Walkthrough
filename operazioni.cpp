#include <iostream>
int main() {
    // Dichiarazione delle variabili
    int num1, num2;
    int somma, differenza, prodotto;

    // Richiesta all'utente di inserire i due numeri
    std::cout << "Inserisci il primo numero intero: ";
    std::cin >> num1;
    std::cout << "Inserisci il secondo numero intero: ";
    std::cin >> num2;

    // Calcolo delle operazioni aritmetiche
    somma = num1 + num2;
    differenza = num1 - num2;
    prodotto = num1 * num2;

    // Stampa a schermo dei risultati
    std::cout << "La somma di " << num1 << " e " << num2 << " è: " << somma << std::endl;
    std::cout << "La differenza di " << num1 << " e " << num2 << " è: " << differenza << std::endl;
    std::cout << "Il prodotto di " << num1 << " e " << num2 << " è: " << prodotto << std::endl;

    return 0;
}
