#include <iostream>
#include "personagem.h"

using namespace std;

int main () {
    
    setlocale(LC_ALL, "portuguese");
    
    personagem heroi("herói", 100, 10);
    heroi.apresentar();
    
 return 0;
}
