#include <iostream>
#include "personagem.h"

using namespace std;

int main () {
    
    setlocale(LC_ALL, "portuguese");
    
    Personagem heroi("herói", 100, 10);
    heroi.apresentar();
    
    Inimigo goblin("Goblin", 30, 5, "Goblin");
    goblin.apresentar();
    
 return 0;
}
