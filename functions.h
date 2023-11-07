#ifndef functions_H
#define functions_H
#include <stdbool.h>
void clearBuffer(void);
bool validate_option(char character);
void fall_asleep(int seconds);
bool validar_login(char *password, char *cpf);
#endif