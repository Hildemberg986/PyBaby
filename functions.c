#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Retirado do chatGPT
void clearBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

bool validate_option(char character)
{
    if (character >= '0' && character <= '9')
    {
        return true;
    }
    return false;
}
void fall_asleep(int seconds)
{
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}

void cadastrarUsuario(char *cpf, char *password)
{

    FILE *arquivo = fopen("../logins.db", "a");

    if (arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return;
    }

    Usuario usuario;
    // Copiar os dados fornecidos para a estrutura Usuario
    snprintf(usuario.cpf, sizeof(usuario.cpf), "%s", cpf);
    snprintf(usuario.password, sizeof(usuario.password), "%s", password);

    // Escrever os dados no arquivo
    fprintf(arquivo, "%s %s\n", usuario.cpf, usuario.password);

    fclose(arquivo);
}

bool validar_login(char *cpf, char *password)
{
    FILE *arquivo = fopen("../logins.db", "r");
    bool achou;

    if (arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return false;
    }

    Usuario usuario;

    // Ler os dados do arquivo enquanto houver linhas
    achou = false;
    while (fscanf(arquivo, "%s %s", usuario.cpf, usuario.password) != EOF)
    {

        if ((strcmp(usuario.cpf,cpf) == 0) && (strcmp(usuario.password,password) == 0)) {
            printf("Achei!\n");
            achou = true;
        }
    }

    fclose(arquivo);

    return achou;
}