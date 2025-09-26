#include <iostream>
int main() {
    // Dichiarazione delle variabili
    float lunghezza, larghezza, area;

    // Richiesta all'utente di inserire la lunghezza e la larghezza
    std::cout << "Inserisci la lunghezza del rettangolo: ";
    std::cin >> lunghezza;
    std::cout << "Inserisci la larghezza del rettangolo: ";
    std::cin >> larghezza;

    // Calcolo dell'area
    area = lunghezza * larghezza;

    // Stampa a schermo del risultato
    std::cout << "L'area del rettangolo è: " << area << " unità quadrate" << std::endl;

    return 0;
}