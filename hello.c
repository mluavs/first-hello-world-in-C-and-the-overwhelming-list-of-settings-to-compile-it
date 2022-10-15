#include <stdio.h>

int main(void)
{
    printf("hello, world pra dar aquela sorte\n");
    printf("que dificuldade puta que pariu viu\n");
}

/*
Compilando
    1. prepocessing: 
aquela primeira linha lá em cima, que começa com # e tudo mais que vier com # antes, vai ser pré processada. Mas onde esse arquivo tá? Porque ele nunca esteve no vscode pra mim. O que acontece é que em algum lugar do hardrive tem uma pasta chamada /usr/include. O que o pre processador tá fazendo é dizer para o meu código o que ele precisa saber.
    2. compiling:
uma vez que o pre processador trabalhou e transformou aquele # em uma função que eu to usando no código, a fase de compilação, de fato, traduz o meu código pra assembly 
    3. assembling:
aqui o compilador transforma o código em zeros e uns, mas não todos os zeros e uns, porque ele ta transformando o código só 
    4. linking: 
é nessa última etapa que ele pega não só o código, mas também tudo que estiver lá em cima, com # na frente e junta tudo, linkando a coisa toda.
*/