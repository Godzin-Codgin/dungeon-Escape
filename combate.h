#ifndef COMBATE_H
#define COMBATE_H

#include <iostream>
#include <string>


inline void exibir(std::string nome, int vida, int ataque) {
    std::cout << "--- Dados do Personagem ---" << std::endl;
    std::cout << "Nome:   " << nome << std::endl;
    std::cout << "Vida:   " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "---------------------------" << std::endl;
}

#endif
