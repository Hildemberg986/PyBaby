//###########################################################################//
//#                                                                         #//
//#             Universidade Federal do Rio Grande do Norte                 #//
//#                 Centro de Ensino Superior do Seridó                     #//
//#               Departamento de Computação e Tecnologia                   #//
//#                  Disciplina DCT1106 -- Programação                      #//
//#    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    #//
//#    Developed by https://github.com/Hildemberg986 -- since Aug, 2023     #//
//#                                                                         #//
//###########################################################################//
//#                                Semana 1                                 #//
//###########################################################################//

#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções
void main_menu_screen(void);
void about_screen(void);
void team_screen(void);
void login_screen(void);
void registration_screen(void);

/////
// Programa principal
int main(void) {

    main_menu_screen();
    about_screen();
    team_screen();
    login_screen();
    registration_screen();

    return 0;
}


/////
// Funções

void main_menu_screen(void) {
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
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("###  Digite a opção desejada e Tecle <ENTER> para continuar... ");
    scanf("%c", &option);
}


void about_screen(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void team_screen(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 


void login_screen(void) {
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
    printf("###                       1-> Logar como Usuario                            ###\n");
    printf("###                       2-> Logar como Administrador                      ###\n");
    printf("###                       3-> Cadastrar Novo Usuario                        ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("###  Digite a opção desejada e Tecle <ENTER> para continuar... ");
    scanf("%c", &option);
} 

void registration_screen(void) {
    struct pessoa {
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
    printf("###   --> Digite o Nome do Usuario... ");
    scanf("%99[^\n]",pessoa1.name);
    getchar();
    printf("###   --> Digite o CPF do Usuario... ");
    scanf("%12[^\n]",pessoa1.cpf);
    getchar();
    printf("###   --> Digite o email do Usuario... ");
    scanf("%100[^\n]",pessoa1.email);
    getchar();
    printf("\n");
} 