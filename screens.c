#include "screens.h"
#include "functions.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
char main_menu_screen(void)
{
    char option;
    system("clear||cls");
    printf("\n");

    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###              Projeto Um Sistema de Gestão para um Hotel                 ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                          |=====- Menu -=====|                           ###\n");
    printf("###                                                                         ###\n");
    printf("###                          1-> Login                                      ###\n");
    printf("###                          2-> Sobre                                      ###\n");
    printf("###                          3-> Equipe                                     ###\n");
    printf("###                          0-> Sair                                       ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("###  Digite a opção desejada e Tecle <ENTER> para continuar... ");
    scanf(" %c", &option);
    getchar();
    return option;
}

void about_screen(void)
{
    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                      |=====- PyBaby Sobre -=====|                       ###\n");
    printf("###                                                                         ###\n");
    printf("###  Um Sistema comercial para a gestão de uma loja de bebês. Desenvolvido  ###\n");
    printf("###  na materia DCT1106 - PROGRAMAÇÃO com o intuito  avaliativo  sobre  os  ###\n");
    printf("###  alunos para testar a compreenção e conhecimentos  em  programação  do  ###\n");
    printf("###  desenvolvedor, tendo uma natureza estritamente acadêmica.              ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...");
    getchar();
}

void team_screen(void)
{
    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                     |=====- PyBaby Equipe -=====|                       ###\n");
    printf("###                                                                         ###\n");
    printf("###            Este projeto exemplo foi desenvolvido por:                   ###\n");
    printf("###                                                                         ###\n");
    printf("###            Hildemberg Eling de Araújo Lucena                            ###\n");
    printf("###            E-mail: hildembergeling@gmail.com                            ###\n");
    printf("###            Redes sociais: @hildembergeling                              ###\n");
    printf("###            Git: https://github.com/Hildemberg986                        ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...");
    getchar();
}

char login_screen(void)
{
    char option;
    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                      |=====- PyBaby Login -=====|                       ###\n");
    printf("###                                                                         ###\n");
    printf("###                       1-> Logar como Cliente                            ###\n");
    printf("###                       2-> Cadastrar Novo Cliente                        ###\n");
    printf("###                       0-> Voltar                                        ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("###  Digite a opção desejada e Tecle <ENTER> para continuar... ");
    scanf(" %c", &option);
    getchar();
    return option;
}

void registration_screen(void)
{
    struct pessoa
    {
        char name[99];
        char cpf[12];
        char email[100];
        char password[100];
    };

    struct pessoa pessoa1;

    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                     |=====- PyBaby Cadastro -=====|                     ###\n");
    printf("###                                                                         ###\n");
    printf("###   --> Digite o Nome do Cliente... ");
    scanf("%99[^\n]", pessoa1.name);
    getchar();
    printf("###   --> Digite o CPF do Cliente... ");
    scanf("%12[^\n]", pessoa1.cpf);
    getchar();
    printf("###   --> Digite o email do Cliente... ");
    scanf("%100[^\n]", pessoa1.email);
    getchar();
     printf("###   --> Digite uma senha de login... ");
    scanf("%12[^\n]", pessoa1.password);
    getchar();
    cadastrarUsuario(pessoa1.cpf, pessoa1.password);
    printf("\n");
}

bool login_client(void)
{

    char password[100];
    char cpf[12];
    bool valitation;

    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                  |=====- PyBaby Login Client -=====|                    ###\n");
    printf("###                                                                         ###\n");
    printf("###   --> Digite o CPF do Cliente... ");
    scanf("%12[^\n]", cpf);
    getchar();
    printf("###   --> Digite a senha... ");
    scanf("%99[^\n]", password);
    getchar();
    printf("\n");
    valitation = validar_login(cpf, password);
    return valitation;
}

void login_admin(void)
{

    char pasword[100];
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                   |=====- PyBaby Login Admin -=====|                    ###\n");
    printf("###                                                                         ###\n");
    printf("###   --> Digite o CPF do Administrador... ");
    scanf("%12[^\n]", cpf);
    getchar();
    printf("###   --> Digite a senha... ");
    scanf("%99[^\n]", pasword);
    getchar();
    printf("\n");
}

void client_sale(void)
{

    system("clear||cls");
    printf("\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                   |=====- PyBaby client sale -=====|                    ###\n");
    printf("###                                                                         ###\n");
    getchar();
}