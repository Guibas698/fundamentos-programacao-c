#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int tam = 0;

struct base_pokemon {
    int id;
    char nome[50];
    char elemento[50];
    int atk;
    int matk;
    int def;
    int mdef;
    int hp;
    int sp;
};

void atribui_pokemon(FILE* file, struct base_pokemon* pokemons) {
    int aux_id, aux_atk, aux_matk, aux_def, aux_mdef, aux_hp, aux_sp;
    char aux_nome[50], aux_elemento[50];
    
    rewind(file);
    int i = 0;
    while (fscanf(file, "%d %s %s %d %d %d %d %d %d", &aux_id, aux_nome, aux_elemento, &aux_atk, &aux_matk, &aux_def, &aux_mdef, &aux_hp, &aux_sp) == 9)
    {
        pokemons[i].id = aux_id;
        strcpy(pokemons[i].nome, aux_nome);
        strcpy(pokemons[i].elemento, aux_elemento);
        pokemons[i].atk = aux_atk;
        pokemons[i].matk = aux_matk;
        pokemons[i].def = aux_def;
        pokemons[i].mdef = aux_mdef;
        pokemons[i].hp = aux_hp;
        pokemons[i].sp = aux_sp;
        i++;
    }
}

void conta_pokemon(FILE* file) {
    int a, b, c, d, e, f, g;
    char tipo[50], nome[50];
    tam = 0;
    
    while (fscanf(file, "%d %s %s %d %d %d %d %d %d", &a, nome, tipo, &b, &c, &d, &e, &f, &g) == 9)
    {
        tam++;
    }
}

void exclui_pokemon(FILE* file, int posicao){
    struct base_pokemon pokemons[tam];
    atribui_pokemon(file, pokemons);
    
    if (posicao < 1 || posicao > tam) {
        printf("Posição inválida.\n");
        return;
    }

    struct base_pokemon pokemons_aux[tam - 1];
    int i = 0;
    int count = 0; // Contador para verificar a posição do pokémon atual
    for (int j = 0; j < tam; j++) {
        count++;
        if (count != posicao) {
            // Armazena o pokémon no vetor auxiliar se não for o pokémon a ser excluído
            pokemons_aux[i] = pokemons[j];
            i++;
        }
    }
    
    fclose(file);
    
    file = fopen("pokemons_carregados.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    
    // bau Escreve os pokémons do vetor auxiliar no arquivo
    for (int j = 0; j < tam - 1; j++) {
        fprintf(file, "%d %s %s %d %d %d %d %d %d\n",
                pokemons_aux[j].id, pokemons_aux[j].nome, pokemons_aux[j].elemento, pokemons_aux[j].atk, pokemons_aux[j].matk, pokemons_aux[j].def,
                pokemons_aux[j].mdef, pokemons_aux[j].hp, pokemons_aux[j].sp);
    }
    
    printf("Pokémon excluido com sucesso!\n");
    
    fclose(file);
}

void mostra_pokemon(FILE* file) {
    int aux_id, aux_atk, aux_matk, aux_def, aux_mdef, aux_hp, aux_sp;
    char aux_nome[50], aux_elemento[50];
    
    rewind(file); 
    
    while (fscanf(file, "%d %s %s %d %d %d %d %d %d", &aux_id, aux_nome, aux_elemento, &aux_atk, &aux_matk, &aux_def, &aux_mdef, &aux_hp, &aux_sp)==9)
    {
        printf("id: %d\nnome: %s\nelemento: %s\natk: %d\nmatk: %d\ndef: %d\nmdef: %d\nhp: %d\nsp: %d\n\n", aux_id, aux_nome, aux_elemento, aux_atk, aux_matk, aux_def, aux_mdef, aux_hp, aux_sp);
    }
    
}

void registra_pokemon(FILE* file) {
    struct base_pokemon pokemon;
    
    printf("Digite o ID do pokemon:\n ");
    scanf("%d", &(pokemon.id));

    printf("Digite o nome do pokemon: ");
    scanf("%s", pokemon.nome);

    printf("Digite o elemento do pokemon: ");
    scanf("%s", pokemon.elemento);

    printf("Digite o atk do pokemon: ");
    scanf("%d", &(pokemon.atk));

    printf("Digite o matk do pokemon: ");
    scanf("%d", &(pokemon.matk));

    printf("Digite o def do pokemon: ");
    scanf("%d", &(pokemon.def));

    printf("Digite o mdef do pokemon: ");
    scanf("%d", &(pokemon.mdef));

    printf("Digite o hp do pokemon: ");
    scanf("%d", &(pokemon.hp));

    printf("Digite o sp do pokemon: ");
    scanf("%d", &(pokemon.sp));
    
    fprintf(file, "%d %s %s %d %d %d %d %d %d\n",
            pokemon.id, pokemon.nome, pokemon.elemento, pokemon.atk, pokemon.matk, pokemon.def,
            pokemon.mdef, pokemon.hp, pokemon.sp);
}

int main() {
    FILE* file = fopen("pokemons_carregados.txt", "r+");
    
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    conta_pokemon(file);

    struct base_pokemon pokemons[tam];
    atribui_pokemon(file, pokemons);

    int menu_selection = 0;
    int adicionando_pokemon = 1; // Variável para controlar o loop
    
    while (adicionando_pokemon) {
        printf("MENU\n=============================================================\n");
        printf("1. Mostrar pokemons\n2. Adicionar pokemon\n3. Excluir pokemon\n4. Batalhar\ndigite qualquer outro numero para stop\n");
        scanf("%d", &menu_selection);
        
        switch (menu_selection) {
            case 1:
                printf("Pokemons registrados\n=============================================================\n");
                printf("Existem %d pokemons registrados\n", tam);
                mostra_pokemon(file);
                break;
            case 2:
                printf("Registre seu pokemon\n=============================================================\n");
                registra_pokemon(file);
                printf("Pokemon adicionado com sucesso!\n");
                break;
            case 3:
                printf("Digite o id do pokemon a ser excluido: ");
                int posicao;
                scanf("%d", &posicao);
                exclui_pokemon(file, posicao);
                break;
            case 4:
                // Implemente a função para batalhar
                break;
            default:
                adicionando_pokemon = 0; 
                break;
        }
    }
    
    fclose(file);
    
    return 0;
}
