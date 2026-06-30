#include <iostream>
#include "combate.h" 
#include "personagem.h"

using namespace std;

int main() {
   
   Personagem heroi("herói", 100, 10);
    heroi.apresentar();
    
    Inimigo goblin("Goblin", 30, 5, "Goblin");
    goblin.apresentar();
    

    
    exibir(nomePersonagem, vidaPersonagem, ataquePersonagem);


    system("pause"); 
    return 0;
}
