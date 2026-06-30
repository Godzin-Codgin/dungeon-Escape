#include <iostream>
#include "combate.h"

using namespace std;

int main() {
    
    string nomePersonagem = "Godzin prozin";
    int vidaPersonagem = 100;
    int ataquePersonagem = 25;

   
    exibir(nomePersonagem, vidaPersonagem, ataquePersonagem);

    
    int defesaInimigo = 15; 
    
   
    int danoCausado = dano(ataquePersonagem, defesaInimigo);

    
    cout << "\n--- Resultado do Ataque ---" << endl;
    cout << "O personagem atacou com " << ataquePersonagem << " de ataque." << endl;
    cout << "O inimigo se defendeu com " << defesaInimigo << " de defesa." << endl;
    cout << "Dano real causado ao inimigo: " << danoCausado << endl;
    cout << "----------------------------" << endl;

    system("pause"); 
    return 0;
}
