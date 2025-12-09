#include <stdio.h>

struct PERSONAGEM {
      int vida;
      int ataque;
};

void vencedor(struct PERSONAGEM personagem1, struct PERSONAGEM personagem2){
    int life1, life2;
    life1 = personagem1.vida;
    life2 = personagem2.vida;
    int dano1, dano2;
    dano1 = personagem1.ataque;
    dano2 = personagem2.ataque;
    while (1)
    {
        life2 = life2-dano1;    
        life1 = life1-dano2;   

        if (life1 ==0)
        {
            break;
        }
        else if (life2 == 0)
        {
            break;
        }
    }
    
    if (life1>0)
    {
        printf("Personagem 1");
    }
    else if (life2>0)
    {
        printf("Personagem 2");
    }
    else
    {
        printf("Empate");
    }
    
    

}
int main(){
    struct PERSONAGEM personagem1, personagem2;

    scanf("%d", &personagem1.vida);
    scanf("%d", &personagem1.ataque);
    scanf("%d", &personagem2.vida);
    scanf("%d", &personagem2.ataque);

    vencedor(personagem1, personagem2);
    return 0;
}