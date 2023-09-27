#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "screens.h"
#include "logic_login_menu.h"

void logic_login_menu()
{
    char option;
    do
    {
        option = login_screen();
        switch (option)
        {
        case '1':
            login_client();
            break;
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