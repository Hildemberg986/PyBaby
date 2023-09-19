// ###########################################################################//
// #                                                                         #//
// #             Universidade Federal do Rio Grande do Norte                 #//
// #                 Centro de Ensino Superior do Seridó                     #//
// #               Departamento de Computação e Tecnologia                   #//
// #                  Disciplina DCT1106 -- Programação                      #//
// #    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    #//
// #    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     #//
// #                                                                         #//
// ###########################################################################//
// #                                Semana 1                                 #//
// ###########################################################################//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "screens.h"
/////
// Programa principal
int main(void)
{
    char option;
    do
    {
        option = '\0';
        option = main_menu_screen();
        if (validate_option(option))
        {
            switch (option)
            {
            case '1':
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
                option = '\0';
                break;
            case '2':
                about_screen();
                break;
            case '3':
                team_screen();
                break;
            case '0':
                system("clear||cls");
                printf("\t\t\tPrograma Encerrado\n");
                break;
            default:
                printf("\t\t\tOpção inválida. Tente novamente.\n");
                clearBuffer();
                fall_asleep(2);
            }
        }
        else
        {
            system("clear||cls");
            printf("\t\t\tOpção inválida. Tente novamente.\n");
            clearBuffer();
            fall_asleep(2);
        }
    } while (option != '0');
    return 0;
}