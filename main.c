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
// #                                Semana 6                                 #//
// ###########################################################################//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "screens.h"
#include "logic_main_menu.h"
#include "logic_login_menu.h"
/////
// Programa principal
int main(void)
{
    char option;
    do
    {
        option = main_menu_screen();
        if (validate_option(option))
        {
            logic_main_menu(option);
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