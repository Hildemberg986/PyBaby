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
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

/////
// Assinatura das funções
char main_menu_screen(void);
void about_screen(void);
void team_screen(void);
char login_screen(void);
void registration_screen(void);
void login_client(void);
void login_admin(void);
void fall_asleep(int seconds);
bool validate_option(char character);
void clearBuffer();
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
/////
// Funções

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
    printf("###    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    ###\n");
    printf("###    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                       |=====- PyBaby Menu-=====|                        ###\n");
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
    printf("###                       2-> Logar como Administrador                      ###\n");
    printf("###                       3-> Cadastrar Novo Cliente                        ###\n");
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
    printf("\n");
}

void login_client(void)
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
    printf("###                  |=====- PyBaby Login Client -=====|                    ###\n");
    printf("###                                                                         ###\n");
    printf("###   --> Digite o CPF do Cliente... ");
    scanf("%12[^\n]", cpf);
    getchar();
    printf("###   --> Digite a senha... ");
    scanf("%99[^\n]", pasword);
    getchar();
    printf("\n");
}
void fall_asleep(int seconds)
{
#ifdef _WIN32
    Sleep(segundos * 1000);
#else
    sleep(seconds);
#endif
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
bool validate_option(char character)
{
    if (character >= '0' && character <= '9')
    {
        return true;
    }
    return false;
}
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}