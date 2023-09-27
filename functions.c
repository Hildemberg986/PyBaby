#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

//Retirado do chatGPT
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

bool validate_option(char character)
{
    if (character >= '0' && character <= '9')
    {
        return true;
    }
    return false;
}
void fall_asleep(int seconds)
{
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}