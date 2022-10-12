# getting-to-know-c E AS CONFIGURAÇÕES DE AMBIENTE NECESSÁRIAS PRA CODAR

ta, vamo lá! :dizzy_face:

eu não trabalho com C, mas tô assistindo às aulas do **David Malan**, da famosa CS050 de Harvard e o primeiro _"hello, world"_ que ele escreve é em C. Criei esse repo pra 
documentar todos os passos que eu tive que fazer pra configurar o ambiente pra escrever um _"hello, world"_ simples. 

## no vscode


```instalar duas extensões:
- C/C++ (Microsoft)
- Code Runner 
- Configurações > Extensões > habilitar a opção "Run in Terminal"
```

## compilador


```baixar MinGW https://osdn.net/projects/mingw/releases/
- executar 
- selecionar mingw-32-base-bin pra instalação (independente do seu pc ser 32 ou 64)
- selecionar mingw32-gcc++ pra instalação (independente do seu pc ser 32 ou 64)
- apply changes 
```

## variáveis de ambiente


```procurar na aba do windows: editar variáveis de ambiente do sistema
- path (criar novo)
- copia e cola o caminho do arquivo MinGw bin
- path de novo (lá embaixo) mesma coisa
```

## DEPOIS DE TUDO ISSO :ok_hand::thumbsup:


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

//isso significa que a gente tá compilando o código - o que sempre precisa ser feito depois de uma modificação, pra que o computador entenda que você de fato mudou o código né, amado
depois vem 

`./a.exe` 

// que é o arquivo executável 


_Referências_

https://www.ufrgs.br/reamat/ComputacaoCientifica/livro/iapcel-hello_world.html

https://www.freecodecamp.org/portuguese/news/como-compilar-seu-codigo-cpp-no-visual-studio-code/

https://www.ime.usp.br/~fmario/mac2166/aula2.html

https://www.alura.com.br/artigos/compilando-executando-programas-c-c-windows

https://www.youtube.com/watch?v=zK2Uu-K-74o&t=235s
