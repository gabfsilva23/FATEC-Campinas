#include <stdio.h>
#include <string.h>

struct data {
    int dia;
    char mes[4];
    int ano;
};

struct funcionario {
    int codigo;
    char nome[40];
    float salario;
    struct data dia_admissao;
};

void imprime_funcionario(struct funcionario);
void imprime_data(struct data, char*);
struct data le_data();

int main() {
    struct data hoje;
    struct funcionario func1;

    hoje = le_data();
    imprime_data(hoje, "Data de hoje");

    func1.codigo = 11010;
    strcpy(func1.nome, "Zezao da Silva");
    func1.salario = 1670.5;
    func1.dia_admissao.dia = 15;
    strcpy(func1.dia_admissao.mes, "Set");
    func1.dia_admissao.ano = 2020;

    imprime_funcionario(func1);

    return 0;
}

void imprime_funcionario(struct funcionario f) {
    printf("\nCodigo: %d", f.codigo);
    printf("\nNome: %s", f.nome);
    printf("\nSalario: %.2f", f.salario);
    imprime_data(f.dia_admissao, "Data admissao");
}

void imprime_data(struct data h, char* desc) {
    printf("\n%s: %d/%s/%d", desc, h.dia, h.mes, h.ano);
}

struct data le_data() {
    struct data data_temp;

    printf("Digite o dia: ");
    scanf("%d", &data_temp.dia);

    printf("Digite o mes: ");
    scanf("%s", &data_temp.mes);

    printf("Digite o ano: ");
    scanf("%d", &data_temp.ano);

    return data_temp;
}