#include <stdio.h>
struct DATA {
     int dia;
     int mes;
     int ano;
};
void atribui(struct DATA *data){
    scanf("%d",&data->dia);
    scanf("%d",&data->mes);
    scanf("%d",&data->ano);
}
int main(){
    struct DATA data1, data2;
    atribui(&data1);
    atribui(&data2);
    int aux1=0, aux2=0;
    
    if (data1.ano < data2.ano) {
        printf("Mais antiga\n");
    } else if (data1.ano > data2.ano) {
        printf("Mais recente\n");
    } else {
        if (data1.mes < data2.mes) {
            printf("Mais antiga\n");
        } else if (data1.mes > data2.mes) {
            printf("Mais recente\n");
        } else {
            if (data1.dia < data2.dia) {
                printf("Mais antiga\n");
            } else if (data1.dia > data2.dia) {
                printf("Mais recente\n");
            } else {
                printf("Iguais\n");
            }
        }
    }

    
    return 0;
}