# PaintBrush Simples em OpenGL 🎨

Este projeto implementa um PaintBrush básico utilizando OpenGL para manipulação de pixels, linhas e triângulos na tela.

## Ferramentas

![Logo do C++](https://cdn-icons-png.flaticon.com/256/6132/6132222.png)

- Linguagem de programação: C++

## Funcionalidades

- Desenho de pixels coloridos individualmente.
- Renderização de linhas entre dois pontos.
- Construção de triângulos preenchidos.
- Uso de blending (transparência) nos pixels.

## Estrutura do Código

### Função `MyGlDraw()`

Esta função é responsável por desenhar os elementos gráficos na tela, chamando funções do `mygl.h.`

- Pixels desenhados individualmente:

    ```
    Pixel pxl7 = {256, 256, 255, 0, 0, 0};  // Vermelho no centro
    Pixel pxl8 = {156, 450, 0, 255, 0, 127}; // Verde com transparência
    Pixel pxl9 = {356, 450, 127, 255, 127, 0}; // Verde-claro sólido
    
    putPixel(pxl7);
    putPixel(pxl8);
    putPixel(pxl9);
    ```

- Desenho de linhas:

    ```
    drawLine(pxl1, pxl9);
    drawLine(pxl3, pxl4);
    drawLine(pxl5, pxl6);
    ```

- Desenho de triângulos:

    `drawTriangle(pxl7, pxl8, pxl9);`

### Função `main()`

- Inicializa o OpenGL e as estruturas de dados.
- Define `MyGlDraw` como a função de desenho principal.
- Entra no loop de renderização do GLUT.

    ```
    InitOpenGL(&argc, argv);
    InitCallBacks();
    InitDataStructures();
    DrawFunc = MyGlDraw;
    glutMainLoop();
    ```

## Como Executar

1. Clone este repositório:
2. Instale as dependências, caso já não o tenha feito:
  - Instalar um Compilador C++
    - Baixe e instale o MinGW-w64
    - Durante a instalação, selecione a opção "Mingw-w64 base"
    - Adicione o caminho do `bin` do MinGW ao Path do Windows (Exemplo: `C:\mingw-w64\mingw32\bin`)
  - Instalar OpenGL e GLUT
    - Baixe a versão para Windows: FreeGLUT Download
    - Extraia os arquivos em um local de fácil acesso
    - Copie os arquivos para os seguintes diretórios:
      - `freeglut.dll` → `C:\Windows\System32\`
      - `freeglut.h` → `C:\mingw-w64\include\GL\`
      - `libfreeglut.a` → `C:\mingw-w64\lib\`
3. Compile o projeto:

    `gcc main.c -o paintbrush -lGL -lGLU -lglut`

4. Rodar o programa:

    `./paintbrush`
