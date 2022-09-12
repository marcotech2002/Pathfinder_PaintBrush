#ifndef INITIALIZE_H_INCLUDED
#define INITIALIZE_H_INCLUDED

#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "definitions.h"
#include "functions.h"

//Declaração de variáveis globais
int j=0;

void init()
{
    HWND meu_console = GetConsoleWindow();
    HDC meu_dc = GetDC(meu_console);
    COLORREF COR = RGB(255,255,0);
    printf("Algoritmo de Bresenham...");
    printf(" ");
    ReleaseDC(meu_console, meu_dc, COR);
    getch();
    return 0;
}

#endif
