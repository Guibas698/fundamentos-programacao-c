#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
int tam = 0;
#define TAM_POKEMON 6

struct base_pokemon {
    int id;
    char nome[50];
    char elemento;
    int atk;
    int matk;
    int def;
    int mdef;
    int hp;
    int sp;
};

void atribui_pokemon(FILE* file, struct base_pokemon* pokemons) {
    int aux_id, aux_atk, aux_matk, aux_def, aux_mdef, aux_hp, aux_sp;
    char aux_nome[50], aux_elemento;
    
    rewind(file);
    int i = 0;
    while (fscanf(file, "%d %s %c %d %d %d %d %d %d", &aux_id, aux_nome, &aux_elemento, &aux_atk, &aux_matk, &aux_def, &aux_mdef, &aux_hp, &aux_sp) == 9)
    {
        pokemons[i].id = aux_id;
        strcpy(pokemons[i].nome, aux_nome);
        pokemons[i].elemento = aux_elemento;
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
        fprintf(file, "%d %s %c %d %d %d %d %d %d\n",
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
    
    printf("Digite o ID do pokemon: ");
    scanf("%d", &(pokemon.id));

    printf("Digite o nome do pokemon: ");
    scanf("%s", pokemon.nome);

    printf("Digite o elemento do pokemon: ");
    scanf(" %c", &(pokemon.elemento));

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
    
    fprintf(file, "%d %s %c %d %d %d %d %d %d\n",
            pokemon.id, pokemon.nome, pokemon.elemento, pokemon.atk, pokemon.matk, pokemon.def,
            pokemon.mdef, pokemon.hp, pokemon.sp);
}


void pokemon_do_jogador(FILE* file, struct base_pokemon* pokemon)
{
    int i;
    int id_escolhido;
    int tam_novo = 0;
    struct base_pokemon novo_pokemon;
    
    printf("Digite o ID de 6 Pokémon para adicionar ao seu time:\n");
    
    for (i = 0; i < 6; i++) {
        printf("Pokémon %d: ", i + 1);
        scanf("%d", &id_escolhido);
        
        // Percorre o arquivo até encontrar o Pokémon com o ID escolhido
        rewind(file);
        while (fscanf(file, "%d %s %c%d %d %d %d %d %d", &novo_pokemon.id, novo_pokemon.nome, &novo_pokemon.elemento, &novo_pokemon.atk, &novo_pokemon.matk, &novo_pokemon.def, &novo_pokemon.mdef, &novo_pokemon.hp, &novo_pokemon.sp) == 9) {
            if (novo_pokemon.id == id_escolhido) {
                // Adiciona o novo Pokémon ao vetor
                pokemon[tam_novo] = novo_pokemon;
                tam_novo++;
                
                // Exclui o Pokémon do arquivo
                exclui_pokemon(file, novo_pokemon.id);
                
                break;
            }
        }
    }
    
    if (tam_novo == 6) {
        printf("Pokémon adicionados com sucesso!\n");
    } else {
        printf("Não foi possível adicionar todos os Pokémon ao time.\n");
    }
}

void pokemon_da_maquina(FILE *file, struct base_pokemon *pokemon) {
    // Abrir o arquivo
    file = fopen("pokemons.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Contar o número total de pokémons disponíveis no arquivo
    int total_pokemons = 0;
    struct base_pokemon temp;

    while (fscanf(file, "%d %s %c %d %d %d %d %d %d\n", &temp.id, temp.nome, &(temp.elemento), &temp.atk, &temp.matk, &temp.def, &temp.mdef, &temp.hp, &temp.sp) == 9) {
        total_pokemons++;
    }

    // Gerar números aleatórios para selecionar os pokémons
    srand(time(NULL));
    int i, j, random_index, found;

    // Selecionar 6 pokémons aleatoriamente
    for (i = 0; i < 6; i++) {
        found = 0;
        random_index = rand() % total_pokemons;

        // Voltar ao início do arquivo
        rewind(file);

        // Encontrar o pokémon correspondente ao índice aleatório
        for (j = 0; j <= random_index; j++) {
            if (fscanf(file, "%d %s %c %d %d %d %d %d %d\n", &temp.id, temp.nome, &(temp.elemento), &temp.atk, &temp.matk, &temp.def, &temp.mdef, &temp.hp, &temp.sp) == 9) {
                if (j == random_index) {
                    // Armazenar o pokémon selecionado no vetor
                    pokemon[i] = temp;
                    found = 1;
                    break;
                }
            } else {
                printf("Erro ao ler o arquivo.\n");
                break;
            }
        }

        // Se não encontrar o pokémon correspondente, tentar novamente
        if (!found) {
            i--;
        }
    }

    // Fechar o arquivo
    fclose(file);
}


void mostra_pokemon_da_luta(struct base_pokemon *pokemon) {
    printf("Pokémons salvos anteriormente pelo jogador:\n");

    // Mostra os pokémons do jogador
    for (int i = 0; i < 6; i++) {
        printf("Pokémon %d:\n", i + 1);
        printf("ID: %d\n", pokemon[i].id);
        printf("Nome: %s\n", pokemon[i].nome);
        printf("Tipo: %c\n", pokemon[i].elemento);
        printf("Ataque: %d\n", pokemon[i].atk);
        printf("Ataque Especial: %d\n", pokemon[i].matk);
        printf("Defesa: %d\n", pokemon[i].def);
        printf("Defesa Especial: %d\n", pokemon[i].mdef);
        printf("HP: %d\n", pokemon[i].hp);
        printf("SP: %d\n", pokemon[i].sp);
        printf("-----------------\n");
    }
}

int calcularDano(struct base_pokemon atacante, struct base_pokemon defensor, int golpe) {
    int dano = 0;
    
    if (golpe == 1) { // Golpe físico (atk)
        dano = atacante.atk - defensor.def;
    } else if (golpe == 2) { // Golpe mágico (matk)
        // Verifica a tabela de dominância dos tipos
        if ((atacante.elemento == 'F' && defensor.elemento == 'P') ||
            (atacante.elemento == 'T' && defensor.elemento == 'E') ||
            (atacante.elemento == 'A' && defensor.elemento == 'F')) {
            dano = atacante.matk * 2 - defensor.mdef;
        } else if ((atacante.elemento == 'P' && defensor.elemento == 'T') ||
                   (atacante.elemento == 'E' && defensor.elemento == 'A') ||
                   (atacante.elemento == 'F' && defensor.elemento == 'A')) {
            dano = atacante.matk / 2 - defensor.mdef;
        } else {
            dano = atacante.matk - defensor.mdef;
        }
    }
    
    if (dano < 0) {
        dano = 0;
    }
    
    return dano;
}






void batalha( struct base_pokemon* pokemons_jogador, struct base_pokemon* pokemons_bot) {
    int escolha;
    struct base_pokemon meu_pokemon;
    struct base_pokemon pokemon_bot;
    
    printf("Escolha o ID do Pokémon com o qual deseja começar a batalha:\n");
    
    // Mostra os Pokémon disponíveis para escolha
    for (int i = 0; i < TAM_POKEMON; i++) {
        printf("%d. %s\n", pokemons_jogador[i].id, pokemons_jogador[i].nome);
    }
    
    scanf("%d", &escolha);
    
    // Verifica se o ID escolhido é válido
    int encontrado = 0;
    for (int i = 0; i < TAM_POKEMON; i++) {
        if (pokemons_jogador[i].id == escolha) {
            encontrado = 1;
            meu_pokemon = pokemons_jogador[i];
            break;
        }
    }
    
    if (encontrado) {
        printf("Você escolheu o Pokémon com ID %d para começar a batalha!\n", escolha);
        
        // Obter o Pokémon do bot
        int indice_bot = rand() % TAM_POKEMON;
        pokemon_bot = pokemons_bot[indice_bot];
        
        printf("Batalha iniciada: %s vs %s!\n", meu_pokemon.nome, pokemon_bot.nome);
        
        // Variáveis temporárias para o hp e sp
        int hp_temp = meu_pokemon.hp;
        int sp_temp = meu_pokemon.sp;
        
        // Loop principal da batalha
        while (hp_temp > 0 && pokemon_bot.hp > 0) {
            // Mostra as opções de ataque
            printf("\nEscolha o tipo de ataque:\n");
            printf("1. Ataque Físico (atk)\n");
            printf("2. Ataque Mágico (matk)\n");
            
            int golpe;
            scanf("%d", &golpe);
            
            // Verifica a escolha do usuário e atualiza o sp
            if (golpe == 2) {
                sp_temp--;
            }
            
            // Calcula o dano do ataque do jogador
            int dano = calcularDano(meu_pokemon, pokemon_bot, golpe);
            
            // Atualiza o hp do Pokémon adversário
            pokemon_bot.hp -= dano;
            
            printf("\n%s causou %d de dano em %s!\n", meu_pokemon.nome, dano, pokemon_bot.nome);
            
            // Verifica se o Pokémon do bot foi derrotado
            if (pokemon_bot.hp <= 0) {
                printf("%s derrotou %s!\n", meu_pokemon.nome, pokemon_bot.nome);
                break;
            }
            
            // Ataque do bot
            int golpe_bot = rand() % 2 + 1; // Escolhe aleatoriamente entre 1 e 2
            
            // Verifica a escolha do bot e atualiza o sp
            if (golpe_bot == 2) {
                sp_temp--;
            }
            
            // Calcula o dano do ataque do bot
            int dano_bot = calcularDano(pokemon_bot, meu_pokemon, golpe_bot);
            
            // Atualiza o hp do jogador
            hp_temp -= dano_bot;
            
            printf("%s causou %d de dano em %s!\n", pokemon_bot.nome, dano_bot, meu_pokemon.nome);
            
            // Verifica se o Pokémon do jogador foi derrotado
            if (hp_temp <= 0) {
                printf("%s derrotou %s!\n", pokemon_bot.nome, meu_pokemon.nome);
                break;
            }
            
            // Exibe o hp e sp restantes
            printf("\nHP restante:\n");
            printf("%s: %d\n", meu_pokemon.nome, hp_temp);
            printf("%s: %d\n", pokemon_bot.nome, pokemon_bot.hp);
            printf("SP: %d\n", sp_temp);
        }
        
        // Fim da batalha
        // Atualizar os pokémons no arquivo ou em outras estruturas, se necessário
    } else {
        printf("ID inválido. Por favor, escolha um ID válido.\n");
    }
}


int main() {
    
    FILE* file = fopen("pokemons_carregados.txt", "r+");
    
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
   
    

    conta_pokemon(file);

    struct base_pokemon pokemons[tam], pokemons_derrotados[6];
    struct base_pokemon pokemons_jogador[TAM_POKEMON];
    struct base_pokemon pokemons_bot[TAM_POKEMON];
    int tam_derrotados = 0;
    atribui_pokemon(file, pokemons);

    int menu_selection = 0;
    int adicionando_pokemon = 1; // Variável para controlar o loop
    
    while (adicionando_pokemon) {
        printf("MENU\n=============================================================\n");
        printf("1. Mostrar pokemons\n2. Adicionar pokemon\n3. Excluir pokemon\n4. Batalhar\n0. stop\n");
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
                
                // Mostra os pokemons disponíveis para o jogador escolher
                mostra_pokemon(file);
                // O jogador escolhe seus 6 pokemons
                printf("Escolha seus 6 pokemons:\n");
                pokemon_do_jogador(file, pokemons_jogador);
                // Bot pega 6 pokemons
                pokemon_da_maquina(file, pokemons_bot);
                // Mostra os pokemons escolhidos pelo jogador
                mostra_pokemon_da_luta(pokemons_jogador);
                // Luta começa agora
                for (int i = 0; i < 6; i++) {
                    batalha(&pokemons_jogador[i], &pokemons_bot[i]);
                }
                break;
            default:
                adicionando_pokemon = 0; 
                break;
        }
    }
    // Atualizar o arquivo com os pokémons derrotados
    file = fopen("pokemons.txt", "a");
    if (file != NULL) {
        for (int i = 0; i < tam_derrotados; i++) {
            fprintf(file, "%d;%s;%d;%d\n", pokemons_derrotados[i].id, pokemons_derrotados[i].nome,
                    pokemons_derrotados[i].hp, pokemons_derrotados[i].sp);
        }
        fclose(file);
    } else {
        printf("Erro ao abrir o arquivo!\n");
    }
    return 0;
}
