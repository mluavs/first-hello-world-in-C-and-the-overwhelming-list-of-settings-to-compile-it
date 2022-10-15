# first-hello-world-in-C-and-the-overwhelming-list-of-settings-to-compile-it :two_hearts:

:point_right: ta, vamo lá!

eu não trabalho com C, mas tô assistindo às aulas do **David Malan**, da famosa CS050 de Harvard (aulas 1 e 2) e o primeiro _"hello, world"_ que ele escreve é em C. 
Nas aulas, ele tá usa o VSCode, mas ele tá num outro rolê, que não se aplica aqui. Criei esse repo aqui pra documentar todos os passos que eu tive que fazer pra configurar o ambiente pra escrever um _"hello, world"_ simples. 

## no vscode

instalar duas extensões (e arrumar uma config):
```
- C/C++ (Microsoft)
- Code Runner 
- Configurações > Extensões > habilitar a opção "Run in Terminal"
```

## compilador

baixar MinGW https://osdn.net/projects/mingw/releases/
```
- executar 
- selecionar mingw-32-base-bin pra instalação (independente do seu pc ser 32 ou 64)
- selecionar mingw32-gcc++ pra instalação (independente do seu pc ser 32 ou 64)
- apply changes 
```

## variáveis de ambiente

procurar na aba do windows: editar variáveis de ambiente do sistema
```
- path (criar novo)
- copia e cola o caminho do arquivo MinGw bin
- path de novo (lá embaixo) mesma coisa
```

## Depois de todos esses passos (que podem ter variações, mas foi o que funcionou pra mim) :ok_hand::thumbsup:


:exclamation: uma vez que o arquivo tá criado, no meu caso o hello.c, o que a gente vê no editor de código é o seguinte: 
```
#include <stdio.h>

int main(void)
{
    printf("hello, world pra dar aquela sorte\n");
    printf("que dificuldade puta que pariu viu\n");
}
```

## então, no terminal, pra compilar, a gente digita o seguinte: 
`gcc hello.c`

`_//isso significa que a gente tá compilando o código - o que sempre precisa ser feito depois de uma modificação, pra que o computador entenda que você de fato mudou o código né, amado_`


depois vem 

`./a.exe` 

`_// que é o arquivo executável_`


_**Referências**_

https://www.ufrgs.br/reamat/ComputacaoCientifica/livro/iapcel-hello_world.html

https://www.freecodecamp.org/portuguese/news/como-compilar-seu-codigo-cpp-no-visual-studio-code/

https://www.ime.usp.br/~fmario/mac2166/aula2.html

https://www.alura.com.br/artigos/compilando-executando-programas-c-c-windows

https://www.youtube.com/watch?v=zK2Uu-K-74o&t=235s
