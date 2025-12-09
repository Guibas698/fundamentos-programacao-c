int buscaBinaria(int vetor[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio =(direita + esquerda) / 2;

        if (vetor[meio] == valor) {
            return meio; // Valor encontrado, retorna o índice
        }
        else if (vetor[meio] < valor) {
            esquerda = meio + 1; // Busca na metade direita
        }
        else {
            direita = meio - 1; // Busca na metade esquerda
        }
    }

    return -1;
}