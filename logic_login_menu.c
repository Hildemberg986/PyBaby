#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"
#include "screens.h"
#include "logic_login_menu.h"

void logic_login_menu()
{
    bool valitation;
    char option;
    do
    {
        option = login_screen();
        switch (option)
        {
        case '1':
            valitation = login_client();
            if (valitation)
            {
                system("clear||cls");
                printf("validooooooooooooooooooo\n");
                fall_asleep(2);
                option = '0';
                break;
            }
            else
            {
                system("clear||cls");
                printf("login invalido!!!\n");
                fall_asleep(2);
                break;
            }
        case '2':
            login_admin();
            break;
        case '3':
            registration_screen();
            break;
        case '0':
            break;
        default:
            system("clear||cls");
            printf("\t\t\tOpção inválida. Tente novamente.\n");
            clearBuffer();
            fall_asleep(2);
        }
    } while (option != '0');
}