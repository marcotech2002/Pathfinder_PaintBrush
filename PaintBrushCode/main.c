//Declara��o das bibliotecas
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Declara��o de constantes
#define _WIN32_WINNT 0x0600

//Declara��o de vari�veis globais
int j=0;

int main()
{
    //-----------------------------------------------------
    // Inicializa o console grafico
    //---------------------------------------------
    HWND meu_console = GetConsoleWindow();
    HDC meu_dc = GetDC(meu_console);
    COLORREF COR= RGB(255,255,0);   /* cor amarela */
    printf("Algoritmo de Breseham...");
    printf(" ");
    //=============================================================

    //SEU CODIGO GRAFICO ENTRA AQUI

    //=============================================================
    ReleaseDC(meu_console, meu_dc);
    getch();
    return 0;
}
