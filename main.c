//###########################################################################//
//#                                                                         #//
//#             Universidade Federal do Rio Grande do Norte                 #//
//#                 Centro de Ensino Superior do Seridó                     #//
//#               Departamento de Computação e Tecnologia                   #//
//#                  Disciplina DCT1106 -- Programação                      #//
//#    Projeto Um Sistema de Gestão para uma Loja de produtos para Bebês    #//
//#    Developed by https://github.com/Hildemberg986 -- since Mar, 2020     #//
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

/////
// Programa principal
int main(void) {
    main_menu_screen();
    about_screen();
    team_screen();
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
    printf("###    Developed by https://github.com/Hildemberg986 -- since Mar, 2020     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                         |=====- PyBaby -=====|                          ###\n");
    printf("###                                                                         ###\n");
    printf("###                          1-> Login                                      ###\n");
    printf("###                          2-> Sobre                                      ###\n");
    printf("###                          3-> Equipe                                     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("\n");
    printf("###            Escolha a opção desejada: ");
    scanf("%c", &option);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("###    Developed by https://github.com/Hildemberg986 -- since Mar, 2020     ###\n");
    printf("###                                                                         ###\n");
    printf("###############################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                         |=====- PyBaby -=====|                          ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
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
    printf("###                         |=====- PyBaby -=====|                          ###\n");
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