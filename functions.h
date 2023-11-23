#ifndef functions_H
#define functions_H
#include <stdbool.h>

typedef struct
{
    char cpf[12];
    char password[100];
} Usuario;

void clearBuffer(void);
bool validate_option(char character);
void fall_asleep(int seconds);
bool validar_login(char *password, char *cpf);
void cadastrarUsuario(char *cpf, char *password);
#endif