#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct horario {
    int ano, mes, dia, hora, min;    
} data;

struct cadastro {
    char placa[7], modelo[10], cor[10], status;
    data entrada, saida;
};

typedef struct cadastro Veiculo;

void inserir(FILE *f) {

    Veiculo veiculo;

    fflush(stdin); printf("Placa: "); gets(veiculo.placa);
    fflush(stdin); printf("Modelo: "); gets(veiculo.modelo);
    fflush(stdin); printf("Cor: "); gets(veiculo.cor);

    int tempoEntrada, tempoSaida;
    do{
        verificar(veiculo);

        tempoEntrada = veiculo.entrada.ano * veiculo.entrada.mes * veiculo.entrada.dia * veiculo.entrada.hora * veiculo.entrada.min;
        tempoSaida = veiculo.saida.ano * veiculo.saida.mes * veiculo.saida.dia * veiculo.saida.hora * veiculo.saida.min;

    } while (tempoEntrada > tempoSaida);

    veiculo.status = 'P';

    fwrite(&veiculo, sizeof(Veiculo), 1, f);    
 
}

void alterar(FILE *f) {
    
    Veiculo veiculo;
    char placa[7];

    printf("Qual a placa do veiculo que deseja alterar? ");
    fflush(stdin); gets(placa);

    while(fread(&veiculo, sizeof(Veiculo), 1, f) == 1){
        if(strcmp(placa, veiculo.placa)){
            inserir(f);
        }
    }
    
}

void remover(FILE *f) {

    Veiculo veiculo;
    char placa[7];

    printf("Qual a placa do veiculo que deseja remover? ");
    fflush(stdin); gets(placa);

    while(fread(&veiculo, sizeof(Veiculo), 1, f) == 1){
        if(strcmp(placa, veiculo.placa)){
            veiculo.status = 'R';
            if(veiculo.status == 'R'){printf("veiculo de placa %s removido", placa);}
        }
    }
}

void buscar(FILE *f) {

    Veiculo veiculo;
    char modelo[10];

    printf("Qual o modelo deseja buscar? ");
    fflush(stdin); gets(modelo);

    while(fread(&veiculo, sizeof(Veiculo), 1, f) == 1){
        if(strcmp(modelo, veiculo.modelo)){
            if(veiculo.status == 'P'){
                printf("modelo: %s, placa: %s, cor: %s,\n entrada - data %d/%d/%d, horario %d:%d\n saida - data %d/%d/%d, horario %d:%d", 
                        veiculo.modelo, veiculo.placa, veiculo.cor,
                        veiculo.entrada.dia, veiculo.entrada.mes, veiculo.entrada.ano, veiculo.entrada.hora, veiculo.entrada.min,
                        veiculo.saida.dia, veiculo.saida.mes, veiculo.saida.ano, veiculo.saida.hora, veiculo.saida.min);
                printf("\n\n");
            } else {printf("Veiculo removido \n");}
        }
    }
}

void listar(FILE *f) {

    Veiculo veiculo;

    while(fread(&veiculo, sizeof(Veiculo), 1, f) >0){

        if(veiculo.status == 'P'){
            printf("modelo: %s, placa: %s, cor: %s,\n entrada - data %d/%d/%d, horario %d:%d\n saida - data %d/%d/%d, horario %d:%d", 
                    veiculo.modelo, veiculo.placa, veiculo.cor,
                    veiculo.entrada.dia, veiculo.entrada.mes, veiculo.entrada.ano, veiculo.entrada.hora, veiculo.entrada.min,
                    veiculo.saida.dia, veiculo.saida.mes, veiculo.saida.ano, veiculo.saida.hora, veiculo.saida.min);
            printf("\n\n");
        }
    }
    system("pause");
}

void verificar(Veiculo veiculo){

    printf("Ano entrada: "); scanf("%d",&veiculo.entrada.ano);
    printf("Mes entrada: "); scanf("%d",&veiculo.entrada.mes);
    if(veiculo.entrada.mes > 12) {printf("mes invalido\n"); printf("Mes entrada: "); scanf("%d",&veiculo.entrada.mes);}
    printf("Dia entrada: "); scanf("%d",&veiculo.entrada.dia);
    if(veiculo.entrada.mes == 1||3||5||7||8||10||12) {
        if(veiculo.entrada.dia > 31){
            printf("dia errado\n"); printf("Dia entrada: "); scanf("%d",&veiculo.entrada.dia);
        }
    }
    if(veiculo.entrada.mes == 4||6||9||11) {
        if(veiculo.entrada.dia > 30){
            printf("dia errado\n"); printf("Dia entrada: "); scanf("%d",&veiculo.entrada.dia);
        }
    }
    if(veiculo.entrada.mes == 2 && (veiculo.entrada.ano % 400 == 0) || ((veiculo.entrada.ano % 4 == 0) && (veiculo.entrada.ano % 100 != 0))) {
        if(veiculo.entrada.dia > 29){
            printf("dia errado\n"); printf("Dia entrada: "); scanf("%d",&veiculo.entrada.dia);
        }
    } else {
        if(veiculo.entrada.dia > 28){
            printf("dia errado\n"); printf("Dia entrada: "); scanf("%d",&veiculo.entrada.dia);
        }
    }
    printf("Hora entrada: "); scanf("%d",&veiculo.entrada.hora);
    if(veiculo.entrada.hora < 0 || veiculo.entrada.hora >= 24){printf("hora errada"); printf("Hora entrada: "); scanf("%d",&veiculo.entrada.hora);}
    printf("Minuto entrada: "); scanf("%d",&veiculo.entrada.min); 
    if(veiculo.entrada.min < 0 || veiculo.entrada.min >= 60){printf("minuto errado"); printf("minuto entrado: "); scanf("%d",&veiculo.entrada.min);}


    printf("Ano saida: "); scanf("%d",&veiculo.saida.ano);
    printf("Mes saida: "); scanf("%d",&veiculo.saida.mes);
    if(veiculo.saida.mes > 12) {printf("mes invalido\n"); printf("Mes saida: "); scanf("%d",&veiculo.saida.mes);}
    printf("Dia saida: "); scanf("%d",&veiculo.saida.dia);
    if(veiculo.saida.mes == 1||3||5||7||8||10||12) {
        if(veiculo.saida.dia > 31){
            printf("dia errado\n"); printf("Dia saida: "); scanf("%d",&veiculo.saida.dia);
        }
    }
    if(veiculo.saida.mes == 4||6||9||11) {
        if(veiculo.saida.dia > 30){
            printf("dia errado\n"); printf("Dia saida: "); scanf("%d",&veiculo.saida.dia);
        }
    }
    if(veiculo.saida.mes == 2 && (veiculo.saida.ano % 400 == 0) || ((veiculo.saida.ano % 4 == 0) && (veiculo.saida.ano % 100 != 0))) {
        if(veiculo.saida.dia > 29){
            printf("dia errado\n"); printf("Dia saida: "); scanf("%d",&veiculo.saida.dia);
        }
    } else {
        if(veiculo.saida.dia > 28){
            printf("dia errado\n"); printf("Dia saida: "); scanf("%d",&veiculo.saida.dia);
        }
    }
    printf("Hora saida: "); scanf("%d",&veiculo.saida.hora);
    if(veiculo.saida.hora < 0 || veiculo.saida.hora >= 24){printf("hora errada"); printf("Hora saida: "); scanf("%d",&veiculo.saida.hora);}
    printf("Minuto saida: "); scanf("%d",&veiculo.saida.min);
    if(veiculo.saida.min < 0 || veiculo.saida.min >= 60){printf("minuto errado"); printf("minuto saida: "); scanf("%d",&veiculo.saida.min);}
}

void duracao(FILE *f){

    Veiculo veiculo;
    char placa[7];

    printf("qual a placa do veiculo que deseja buscar e saber quanto tempo ficou no estacionamento? ");
    fflush(stdin); gets(placa);
    while (fread(&placa, sizeof(Veiculo), 1, f)){
        if(strcmp(placa, veiculo.placa)){
        
            int tempoEntrada, tempoSaida, tempo, ano=0, mes=0, dia=0, hora=0, min=0;
            tempoEntrada = veiculo.entrada.ano * veiculo.entrada.mes * veiculo.entrada.dia * veiculo.entrada.hora * veiculo.entrada.min;
            tempoSaida = veiculo.saida.ano * veiculo.saida.mes * veiculo.saida.dia * veiculo.saida.hora * veiculo.saida.min;
            tempo = tempoSaida - tempoEntrada;

            while(1){
                if(tempo >= 525600){
                    tempo = tempo - 525600;
                    ano++;
                } else if(tempo >= 43200){
                    tempo = tempo - 43200;
                    mes++;
                } else if(tempo >= 1440){
                    tempo = tempo - 1440;
                    dia++;
                } else if(tempo >= 60){
                    tempo = tempo - 60;
                    hora++;
                } else if(tempo >= 1){
                    tempo = tempo - 1;
                    min++;
                } else if(tempo == 0){
                    printf("%d ano, %d meses, %d dias, %d horas, %d minutos\n", ano, mes, dia, hora, min);
                    break;
                }
            }
        }
    }
    
}

int main() {
    FILE *f = fopen("arquivo", "rb+");
    if (f == NULL){

        f = fopen("arquivo", "wb+");
        if( f == NULL) {
            printf("ERRO: não e possivel abrir o arquivo");
            system("pause");
            exit(1);
        }
    }

    int opcao = -1;
    while (opcao != 0) {
        printf("\n\n 0-sair\n 1-insere\n 2-altera\n 3-remove\n 4-busca\n 5-lista\n");
        printf("\n Opcao: "); scanf(" %d",&opcao);
        switch(opcao) {
            case 1: inserir(f); break;
            case 2: alterar(f); break;
            case 3: remover(f); break;
            case 4: buscar(f); break;
            case 5: listar(f); break;
            printf("\n\n\n");
        }
    }

    fclose(f);
    return 0;
}
