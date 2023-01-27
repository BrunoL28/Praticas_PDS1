# Praticas_PDS
Aqui você pode conferir os enunciados de cada prática. Basta clicar no "Clique aqui" abaixo de cada prática para ver seu respectivo enunciado.
### Prática 0

<details>
  <summary>Clique aqui</summary>
    Exercício 0: Alô mundo! O programa abaixo é o primeiro programa que você vai fazer na linguagem C. É um programa que simplesmente imprime “Alo mundo!” na tela. Digite o programa abaixo no seu editor de programas favorito. Depois, compile e execute o programa.

          #include <stdio.h>
  
          int main(){
            printf(“Alo mundo!”);
            return 0;
          }

Exercício 1: Impressão do nome

Escreva um programa que imprime o seu nome completo na tela.

Exercício 2: Sinal sonoro

Escreva um programa que emite um sinal sonoro. Para isso, basta imprimir o caractere especial ‘\a‘, ou seja, ao invés de imprimir “Alo mundo” ou o seu nome, imprima esse caractere especial.

Exercício 3: Cálculo do Seno de 3,14 e de 4,13

Escreva um programa que imprime na tela os senos de 3,14 e de 4,13. Use (= copiar e colar) o código que imprime o seno de 1,5, que está nos slides da Aula 2, para auxiliá-lo. E não se preocupe, boa parte desse código é novidade para você! No entanto, mão é muito difícil deduzir quais operações você precisa alterar (e criar) para imprimir os valores dos senos pedidos nesta questão.

Exercício 4: Impressão dos arquivos da pasta

Escreva um programa que imprime na tela todos os arquivos da pasta. Para isso, chame a operação system(“dir”) (ou system(“ls”), no Linux). A função “system” da linguagem C (biblioteca “stdlib.h”) executa uma operação do sistema operacional e o comando “dir” do prompt de comando (ou “ls”, se está em um sistema UNIX) lista os arquivos da pasta.
    
  </details>
  
### Prática 1
  
<details>
  <summary>Clique aqui</summary>
    Exercício 1: Código do nome

Escreva um programa para imprimir o seu primeiro nome em código ASC. Se o seu nome for “Ana”, o seu programa deve imprimir “65 110 97”.

Exercício 2: Troca de valores

Considere o programa abaixo:

      #include <stdio.h>
  
      void main(){
        float a = 3.14159, b = 2.71828;
        printf(“\nPI = %f”, b);
        printf(“\nEULER = %f”, a);
      }
  
Note que o programador trocou as variáveis que deveriam ser exibidas em cada printf. Assim, altere o programa acima de forma a corrigir o erro do programador. O problema é que o programador proibiu que você altere o que ele escreveu e também que digite os valores das constantes novamente. Então, faça isso (1) sem alterar nenhuma linha que o programador escreveu e (2) sem escrever novamente as constantes 3.14159 e 2.71828. Dica: troque os valores armazenados em cada variável.

Exercício 3: Conta Poupança

Uma conta poupança foi aberta com um depósito de R$789,54, com rendimentos de 0.56% de juros ao mês. No segundo mês, R$303,20 reais foram depositados nessa conta poupança. No terceiro mês, R$58,25 reais foram retirados da conta. Implemente um programa que imprime quanto haverá nessa conta no quarto mês.

Resposta: A conta terá R$1050,91 no quarto mês.

Exercício 4: IMC

Brutus e Olívia foram ao médico, que disse a eles que ambos estão fora do peso ideal. Ambos discordaram veementemente da afirmação do médico. Para provar que estava certo, o médico mostrou o Índice de Massa Corporal (IMC) de ambos, considerando que Brutus tem 1,84m e pesa 122kg e que Olívia tem 1,76m e pesa 45kg. Implemente um programa para mostrar o IMC de Brutus e Olívia e qual é a quantidade mínima de quilos que Brutus e Olívia devem perder ou ganhar para atingirem um peso saudável segundo a classificação do IMC. Use a seguinte fórmula para cálculo do IMC:
IMC = pesoaltura altura

A tabela abaixo descreve a classificação para as faixas de IMC.

IMC

Classificação

< 16 - Magreza grave
    
16 a < 17 - Magreza moderada
  
17 a < 18.5 - Magreza leve
           
18.5 a < 25 - Saudável
  
25 a < 30 - Sobrepeso
         
30 a < 35 - Obesidade grau I
  
35 a < 40 - Obesidade grau II (severa)
         
≥ 40 - Obesidade grau III (mórbida)
         
Resposta: O IMC do Brutus é 36,03 e o IMC da Olívia é 14,53. Brutus precisa perder, no mínimo, (aproximadamente) 37 quilos e Olívia precisa ganhar, no mínimo, (aproximadamente) 12 quilos.

Desafio para os fortes

Dígito verificador ou algarismo de controle é um mecanismo de autenticação utilizado para verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes ou erros de transmissão ou digitação. Consiste em um ou mais algarismos acrescentados ao valor original e calculados a partir deste através de um determinado algoritmo. Números de documentos de identificação, de matrícula, cartões de crédito e quaisquer outros códigos numéricos que necessitem de maior segurança utilizam dígitos verificadores. Esse trabalho consiste em calcular o dígito verificador do CPF. Seu programa deve receber um cpf sem o dígito verificador do usuário e imprimir o CPF com o dígito verificador. Você pode usar o seu CPF e de parentes e colegas para testar o programa. A seguir, as regras para o cálculo do dígito verificador são definidas através de um exemplo. É utilizado como exemplo o número: 123456789. Calcule a soma dos produtos dos nove dígitos utilizando peso 2 para unidade, peso 3 para dezena, peso 4 para centena e assim sucessivamente. Exemplo: 92+83+74+65+56+47+38+29+1*10 = 210.

A dezena do número verificador é 0 caso o resto da divisão por 11 da soma dos produtos seja 0 ou 1; caso contrário a dezena corresponde a subtrair de 11 o resto da divisão por 11 da soma dos produtos.

Calcule a soma dos produtos dos dez dígitos, onde o dígito menos significativo passa a ser a dezena dos dígitos verificadores, utilizando os seguintes pesos: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11;

A unidade do número verificador é 0 caso o resto da divisão da soma dos produtos seja 0 ou 1; caso contrário a unidade corresponde a 11 menos o resto da divisão por 11 da soma dos produtos. Exemplo: resto da divisão de 255 por 11 é 2 então a unidade do número verificador é 11-2=9 Dica: para resolver esse problema, você precisa aprender três conceitos que ainda não foram ensinados em sala de aula: leitura de dados a partir do teclado, resto da divisão entre dois números, e processamento condicional. Para o primeiro conceito, procure saber como funciona a função scanf, que é da biblioteca stdio.h. Para o segundo conceito, procure saber como funciona o operador %, ou mod. Por fim, e mais difícil que os conceitos anteriores, procure saber como funciona o comando if e else da linguagem C. O aprendizado de uma linguagem depende muito da sua iniciativa de correr atrás das soluções. Esse exercício é uma forma de incentivar a autodidática.
</details>
  
### Prática 2
  
<details>
  <summary>Clique aqui</summary>
    Um estatístico lhe procurou pois precisa de uma implementação em C de funções de densidade de probabilidade de três distribuições: Cauchy padrão, Gumbel e distribuição de Laplace.

Exercício 1

Crie uma função que retorna a função de densidade de probabilidade para cada uma dessas distribuições.

a) Cauchy padrão

b) Gumbel

c) Laplace

Considere usar as funções exp(x) para calcular e^x e fabs(x) para calcular |x| ambas funções encontradas na biblioteca math.h.

Exemplos:

fabs(-5.3) retorna 5.3

exp(3) retorna e^3

Além disso, considere que pi = 3.141592 ou então use a constante M_PI da biblioteca math.h. Por fim, note que além de X as funções podem ter outros parâmetros de entrada. A função densidade de probabilidade da distribuição de Laplace, por exemplo, tem como parâmetros de entrada , e .

Exercício 2

Crie e compile um módulo que contenha as funções estatísticas implementadas no exercício anterior.

Exercício 3

Implemente um programa que use o módulo criado do exercício anterior para calcular e exibir a função densidade de probabilidade nos seguintes pontos:

cauchy(x=-2)

[resultado para conferência: 0.063662]

gumbel(x=0, 
=0.5, 
=2)

[resultado para conferência: 0.177786]

laplace(x=-6, 
=-5, 
=4)

[resultado para conferência: 0.097350]

Resumo da obra:

Nesta prática você deve entregar três arquivos:

estatistica.h, que contém os cabeçalhos das funções cauchy, gumbel e laplace;

estatistica.c, que contém a implementação das funções cauchy, gumbel e laplace;

pratica2.c, que contém a função main e as chamadas das funções cauchy, gumbel e laplace.
</details>
  
### Prática 3
 
<details>
  <summary>Clique aqui</summary>
   
      1. Conversão de tipo
  
a) Escreva uma função que recebe um número ponto flutuante como parâmetro e retorna um ponto flutuante equivalente à sua parte inteira. Exemplo: se a sua função receber -3.141592 como parâmetro, ela deve retornar -3.000000. Protótipo da função: 
  
      float parteInteira(float x);

b) Escreva uma função que recebe um número ponto flutuante como parâmetro e retorna um ponto flutuante equivalente à sua parte fracionária. Exemplo: se a sua função receber -3.141592 como parâmetro, ela deve retornar -0.141592. Protótipo da função: 
  
      float parteFracionaria(float x);

c) Escreva uma função que recebe dois inteiros x e y como parâmetros e retorna um ponto flutuante correspondente à divisão do primeiro pelo segundo (x dividido por y). Protótipo da função: 
      
      float divInts(int x, int y);

d) Faça um programa para testar as funções das letras a, b e c. Para cada função, teste pelo menos três entradas diferentes que, idealmente, dão saídas diferentes.

      2. Introdução à ponteiros
  
a) Escreva um programa que cria três variáveis, uma do tipo inteiro, outra do tipo ponto flutuante e outra do tipo caractere. Depois imprima na tela os endereços de memória que essas variáveis fazem acesso.

b) Altere o programa abaixo de forma a fazer com que o mesmo imprima 3 ao invés de 0. Você não pode executar nenhuma função de atribuição usando a variável x e nem alterar o comando printf da última linha do corpo da função main.

      #include <stdio.h>
       void main() {
          int x = 0;
          //coloque seu código aqui:

          printf(“%d”, x);
       }
  
c) Escreva uma função de nome soma1 que recebe como parâmetro um endereço de memória de inteiros (ponteiro para inteiro) e que soma 1 ao valor do seu conteúdo. Essa função deve ser do tipo void. Parte do seu protótipo é:

       void soma1(______________);
  
d) Resolva o exercício 2b usando a função do soma1 do exercício anterior.

      3. Atribuição dinâmica de valores
  
A função scanf permite que o usuário entre com valores para serem armazenados em endereços da memória. Caso você tenha variáveis no seu programa, a função scanf pode atribuir os valores que o usuário entrar diretamente nos endereços das suas variáveis, ou seja, atribui valores às próprias variáveis. Considere o programa abaixo, em que o usuário entra com dois valores ponto flutuante, que são atribuídos aos endereços das variáveis x e y. Altere este programa de forma a trocar os valores das duas variáveis. Você não pode alterar o último printf.

      #include <stdio.h>
      void main() {
        float x,y;
        scanf(“%f %f”, &x, &y);
        //coloque seu código aqui:

        printf(“\nx = %f\ny = %f”, x, y);
      }
  
        4. Introdução à passagem de parâmetro por referência
  
a) Escreva uma função de nome troca que recebe como parâmetros duas variáveis capazes de armazenar endereços de memória de pontos flutuantes (que tipo de variável é capaz de fazer isso?), end_valor1 e end_valor2. Essa função deve trocar o conteúdo dos endereços armazenados nessas variáveis, ou seja, o conteúdo armazenado no primeiro endereço (end_valor1) deve ser armazenado no endereço do segundo parâmetro (end_valor2), e vice-versa.

b) Resolva o Exercício 3 usando a função troca.

       5. Fast Pow
  
a) Neste exercício você deve usar operações de deslocamento de bits << e/ou >>. Primeiro, faça uma função de nome fast_pow_2 que recebe um inteiro expoente e retorna um unsigned long long contendo a potência de dois correspondente. Por exemplo, se o expoente passado como parâmetro for 7, a sua função deve retornar 2 elevado a 7. Um número do tipo unsigned long long é um inteiro sem sinal de 64 bits. Você o trata exatamente como um unsigned int, mas o seu alcance é muito maior. Protótipo da função:

      unsigned long long fast_pow_2(int expoente);
  
b) Depois, faça um programa para responder a seguinte pergunta: qual é a maior potência de 2 que um unsigned long long é capaz de armazenar? Faça um programa que use a função fast_pow_2 para imprimir esse limite. Para imprimir um unsigned long long você deve usar o especificador de formato %llu.

      6. Funções simples sem operadores condicionais
  
Implemente funções para realizar as operações abaixo sobre parâmetros recebidos como números inteiros sem sinal (unsigned int). Suas funções não devem usar qualquer operador condicional (exemplo: if). Dica: algumas delas podem requerer operações bit-a-bit.

Abaixo um exemplo de uma função que retorna o negativo do parâmetro:

      int neg(unsigned int number) {
        return -number;
      }
  
a) DDD. Extrair código de área de números de telefone com 8 dígitos (e.g., para o telefone 3134095858 a sua função deve retornar 31).

Protótipo:

      int ddd(unsigned int number);
  
b) Soma 1 se for par. Transformar um número par no próximo número ímpar e manter um número ímpar inalterado. Exemplo: para o número 4 a sua função deve retornar 5 e para o número 5 a sua função deve retornar 5.

Protótipo:

      int soma1SePar(unsigned int number);
  
c) Par ou ímpar. Retornar verdadeiro se o número for par ou falso caso contrário. Dica: lembre dos conceitos de verdadeiro e falso para a linguagem C.

Protótipo:

      int parOuImpar(unsigned int number);
  
d) Programa principal. Faça um programa para testar as funções DDD, soma1SePar e parOuImpar. Para cada função, teste pelo menos três entradas diferentes que, idealmente, dão saídas diferentes.
</details>
  
### Prática 4
  
<details>
  <summary>Clique aqui</summary>
    Exercício 1

Implementar uma função que recebe como parâmetro uma velocidade em km/h (quilômetros por hora) e retorne a mesma convertida para m/s (metros por segundo). A fórmula de conversão é M = K/3.6, sendo M a velocidade em km/h e K a velocidade em m/s. 

Protótipo:

    float paraMetrosPorSegundo(float v);

Exercício 2

Implementar uma função que recebe como parâmetro o raio de um círculo e retorne a área do círculo correspondente. A área do círculo é pi x raio^2, sendo que pi = 3.141592. 

Protótipo:

    float areaCirculo(float raio);

Exercício 3

Implementar uma função que recebe três números inteiros como parâmetro e retorna o maior entre eles. 

Protótipo:

    int maior3(int n1, int n2, int n3);

Exercício 4

Implementar uma função que recebe como parâmetro um número inteiro n e retorne 1 se ele for par e 0 caso ele seja ímpar. 

Protótipo:

    int ehPar(int n);

Exercício 5

Implementar uma função que recebe como parâmetro um número inteiro n e retorne 1 se ele for divisível por 3 ou por 5, mas não simultaneamente pelos dois, ou 0 caso contrário (divisível por 3 e 5 ou por nenhum dos dois). 

Protótipo:

    int ehDivisivelPor3ou5(int n);

Exercício 6

Implemente uma função que recebe como parâmetro a altura em metros e o sexo ('M' para masculino e 'F' para feminino) de uma pessoa e retorne o seu peso ideal PI, sendo que PI = (72.7 x H) - 58 caso o sexo seja masculino e PI = (62.1 x H) - 44.7 caso feminino. 

Protótipo:

    float pesoIdeal(float h, char sexo);

Exercício 7

Implemente um programa para ler o sexo, a altura, e o peso do usuário e informar quantos quilogramas ele deve ganhar ou perder para alcançar o seu peso ideal. Use a função pesoIdeal do exercício anterior.

Exercício 8

Implementar uma função que recebe como parâmetro um número inteiro N e retorne a soma dos números ímpares de 0 até N (incluindo N, se N for ímpar). 

Protótipo:

    int somaImpares(int N);

Exercício 9

Implementar uma função que recebe como parâmetro um número inteiro N e retorne o seu fatorial. Exemplo: o fatorial de 5 = 5! = 5 x 4 x 3 x 2 x 1 = 120. 

Protótipo:

    double fatorial(int N);

Exercício 10

Implementar uma função que recebe como parâmetro um número inteiro N e retorne a soma de todos os números positivos menores ou iguais a N que são divisíveis por 3 ou por 5, mas não por ambos. Exemplo: para N==20, a soma é 3+5+6+9+10+12+18+20 = 83. 

Protótipo:

    int somaNumerosDiv3ou5(int N);

Exercício 11

Implemente uma função que recebe como parâmetro três números inteiros maiores que zero (não precisa testar) x,y,z e uma operação numérica que pode assumir os valores 1,2,3 e 4. Caso a operação seja 1, a função deve calcular a média geométrica, caso seja 2, a média ponderada, caso seja 3, a média harmônica e, por fim, caso seja 4, a média aritmética. 

Protótipo:

    float calculaMedia(int x, int y, int z, int operacao);

Exercício 12

Implementar uma função que recebe como parâmetro um número inteiro N e retorne o seu número de divisores. Exemplo: os divisores de 66 são 8: 1,2,3,6,11,22,33,66. 

Protótipo:
  
    int numeroDivisores(int N);

Exercício 13

Implementar uma função que recebe como parâmetro um número inteiro positivo N e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Exemplo: para N == 8, o enésimo termo é 13, uma vez que a sequência de Fibonacci até o oitavo termo é: 0,1,1,2,3,5,8,13. 

Protótipo:

    int enesimoFibonacci(int N);

Exercício 14

Escreva uma função que retorna o máximo divisor comum (MDC) entre dois números inteiros. O MDC entre dois números é o maior número inteiro que os divide. Ex: O MDC entre 18 e 12 é 6. O MDC entre 18 e 6 é 6. 

Essa função deve ter o seguinte protótipo:

    int mdc(unsigned int x, unsigned int y);

Exercício 15

Escreva uma função que retorna o mínimo múltiplo comum (MMC) entre dois números inteiros. O MMC entre dois números é o menor número inteiro que é múltiplo de ambos, ou seja, que tem como divisores os dois números. Ex: O MMC entre 18 e 12 é 36. O MMC entre 18 e 6 é 18. 

Essa função deve ter o seguinte protótipo:

    int mmc(unsigned int x, unsigned int y);

Exercício 16

Escreva um programa que lê dois números inteiros do teclado e imprime na tela o máximo divisor comum (MDC) e o mínimo múltiplo comum (MMC) entre eles. Caso o usuário insira qualquer valor menor ou igual a zero, o programa deve informar isso a ele e pedir um novo número. Esse processo deve se repetir enquanto qualquer um dos números lidos seja menor ou igual a zero. 
</details>
  
### Prática 6
  
<details>
  <summary>Clique aqui</summary>
    Exercício 1: Número de Euler

O valor de  (número de Euler) pode ser aproximado pelo somatório:

    e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ...

Implemente um programa para aproximar o valor de e . Seu programa deve aumentar a precisão da aproximação calculando iterativamente (isto é, num laço) os termos do somatório acima. Seu programa deve parar a aproximação quando o i-ésimo termo (1/i!) for menor do que 10^(-6).

Implemente esse programa fazendo uma função separada para calcular o fatorial de i.

Exercício 2: Calculador de conceito
 
O conceito de um aluno é calculado a partir de sua nota, seguindo a tabela abaixo. Faça um programa que lê a nota de um aluno do teclado e imprime seu conceito. Assuma que alunos só podem receber notas inteiras (isto é, sem decimais). Você deve usar o comando switch para verificar a nota lida.

    Nota

    0 a 4 -> F
    5 -> E
    6 -> D
    7 -> C
    8 -> B
    9+ -> A

Exercício 3: Triângulo de Floyd

Faça um programa que lê um número inteiro N e imprime as N primeiras linhas do triângulo de Floyd:

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

Desafio: Faça um programa para imprimir a N-ésima linha sem calcular as anteriores.

Exercício 4: Tamanho de uma string

Implemente um programa que leia um string e conte o número de caracteres. Não use a função strlen. Para ler uma string de até 127 caracteres do teclado, use o seguinte código:

    char linha[128];
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);

Dica: veja o vídeo sobre fgets 

Exercício 5: Conversão de caixa

Faça um programa que leia um string e modifique todos os caracteres minúsculos por caracteres maiúsculos.

Dica: os caracteres minúsculos tem o código ASCII entre 97 e 122 e os caracteres maiúsculos tem o código ASCII entre 65 e 90.

Exercício 6: Detector de palíndromos

Implemente código C para testar se uma string é um palíndromo. Um palíndromo é uma palavra idêntica quando lida de trás para frente, como "arara", "radar" e "reviver".

Exercício 7: Inversão de string

Escreva um programa para ler um texto do teclado e imprimir o inverso dele. Use o ponto final para indicar o término do texto, ou seja, o usuário deve terminar o texto sempre com um ponto final. Leia um caractere do texto por vez usando a função getc como a seguir:

    char c = getc(stdin); 

Exercício 8: Abreviação de nome

Escreva um programa para ler um nome completo do teclado terminado com um ponto final (‘.’). Seu programa deve imprimir o mesmo na forma abreviada. Exemplo: o nome “Pedro Olmo Stancioli Vaz de Melo.” deve ser abreviado para “P.O.S.V.M.”. Note que o processo de abreviação deve ignorar palavras que começam com caracteres minúsculos. Considere que o usuário irá inserir apenas nomes válidos, sempre irá terminar o nome com o caractere ‘.’ e o nome não conterá acentos.

Exercício 9: Desafio

Implementar um programa do Exercício 8 considerando os possíveis erros do usuário:

O número de espaços entre os nomes pode ser ilimitado. Ex: “Pedro           Olmo”.

Considerar que o usuário pode trocar letras maiúsculas por minúsculas e vice-versa. Ex: “Pedro      oLMo”.

Desconsiderar todas as palavras conectoras de nomes: de, da, do, das, dos.

</details>
  
### Prática 7
  
<details>
  <summary>Clique aqui</summary>
    Exercício 1: Produto Escalar

Escreva um programa em C que recebe dois arranjos de números reais U e V e a dimensão N dos dois arranjos e que retorna o produto escalar de U e V .

Assuma que  é menor que o número máximo de elementos do arranjo (por exemplo, 100). Para testar, preencha cada vetor com um único valor.

Exercício 2: Fibonacci

A sequência de Fibonacci pode ser definida como:

fib(0) = 1
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2), para n>2

Implemente um programa que calcule a série de Fibonacci e armazene em um vetor cada elemento da série, de forma que a posição 0 armazene o termo 0, a posição 1 o termo 1, e assim por diante. Lembro que o termo 0 é o inteiro 1. Seu programa deve receber do usuário um número entre 0 e 1000 e imprimir o termo correspondente ao número recebido. O usuário deve ser capaz de entrar com vários números interativamente em uma mesma execução. O programa termina quando o usuário entrar com um número negativo ou maior que 1000. Dica: se o tipo int for insuficiente para armazenar todos os elementos da série, use outro tipo de dados.

Exercício 3: Média dos elementos de um vetor***

Escreva uma função em C que recebe um vetor de números reais V e número de elementos N armazenados em V e que retorna a média dos N elementos armazenados em V . O vetor deve ser preenchido com números aleatórios através de uma outra função. Para gerar números aleatórios, use a função drand48() no Linux, ou a função rand() no Windows, da biblioteca stdlib.h.

Exercício 4: Intercalação de vetores

Faça um programa que leia 2 vetores X e Y de 10 elementos, cada um. Intercale os elementos desses 2 vetores formando assim um novo vetor Z de 20 elementos, onde, nas posições ímpares de Z, estejam os elementos de X e, nas posições pares, os elementos de Y. Exemplo: Se X = 3,5,2,8,4 e Y = 1,7,6,5,2 então Z = 3,1,5,7,2,6,8,5,4,2. Imprimir o vetor Z.

Exercício 5: Inverso de um vetor

Faça um programa para ler um vetor V de N elementos e gerar um outro vetor com esses N elementos em ordem inversa. O valor de N é lido pelo teclado.

Exercício 6: União de vetores

Faça um programa para preencher dois vetores X e Y de 60 posições com valores aleatórios entre 0 e 365. Imprima o conjunto união desses dois vetores. Curiosidade: leia sobre o paradoxo do aniversário.

Exercício 7: Teste da Função rand()

Uma boa função para geração de números aleatórios deve gerar valores com igual probabilidade, i.e., se eu quero gerar 100 valores entre 1 e 10, o número de vezes que cada número é gerado deve ser próximo de 10. Assim, nesta prática você deve criar um programa para testar a qualidade da função rand() da linguagem C. Para isso, gere 5000000 números aleatórios entre 0 (inclusive) e 999 (inclusive) e conte quantas vezes cada número foi gerado. Imprima a diferença entre a maior e a menor contagem. Exemplo: se o número 83 foi aquele que mais vezes foi gerado, com 5315 gerações, e o número 762 foi aquele que menos vezes foi gerado, com 4802 gerações, então seu programa deve imprimir 513.

Dica: crie um vetor de inteiros de 1000 posições para armazenar quantas vezes cada número (entre 0 e 999) é gerado. Assim, cada vez que você gerar aleatoriamente o número , faça vetor_contagem[k]++. Exemplo: se você gerar o número 888, faça vetor_contagem[888]++. No final, vetor_contagem[k] conterá o número de vezes que o número  foi gerado.

DESAFIO PARA OS FORTES: Além da diferença, imprimir também o desvio padrão das contagens. Para entender o que é o desvio padrão e como ele é calculado, consulte a Wikipedia ou qualquer site disponível na Internet.

Teoria

Números aleatórios

A única função que temos na linguagem C para gerar um número aleatório é a função \texttt{rand}. Essa função não requer parâmetros e retorna um número inteiro aleatório entre 0 e 2^31 - 1 (maior inteiro possível, lembram?). 

Exemplo de código que gera três números aleatórios:

    #include <stdio.h>

    void main() {

    int r1, r2, r3;
    r1 = rand();
    r2 = rand();
    r3 = rand();

    printf("numeros gerados: %d, %d, %d", r1, r2, r3);
    }

Vetores

Para calcular a média dos  números inteiros gerados aleatoriamente do Problema 1, você precisa de 100 variáveis inteiras. Com o conhecimento que temos hoje, teríamos que criar 100 variáveis, o que é impraticável. Assim, para resolver esse problema, podemos criar uma única variável do tipo vetor para armazenar todos esses valores. Essa variável do tipo vetor pode ter, por exemplo, o nome  e ter associada a ela 100 endereços de memória para guardar inteiros. Como eu faço isso?

    int r[100]; //cria um vetor de inteiros com 100 posicoes

Assim, eu posso considerar que cada uma das 100 posições é uma variável única para eu armazenar um valor inteiro. E como eu acesso essas variáveis? Basta eu utilizar o índice da posição que eu quero acessar entre colchetes, depois do nome da variável. Por exemplo, para eu armazenar o número -15 na primeira posição do vetor r e o número 948 na quadragésima posição de r, devo executar as seguintes operações:

    r[0] = -15;
    r[39] = 948;

Note que a primeira posição de um vetor de 100 posições é 0 e a última posição é 99. Então, como faço para calcular a média desses dois números?

    float media = (r[0] + r[39])/2.0;

O código completo é:

    #include <stdio.h>

    void main() {

    int r[100]; //cria um vetor de inteiros com 100 posicoes
    r[0] = -15;
    r[39] = 948;
    float media = (r[0] + r[39])/2.0;
    }
</details>
  
### Prática 9
  
<details>
  <summary>Clique aqui</summary>
    Exercício 1

Neste exercício, você deve criar um protótipo de um sistema de batalha entre guerreiros de um jogo. 

Para isso, implemente os itens a seguir em um módulo separado chamado jogo.

1.1. Defina um novo tipo de dados chamado Guerreiro com os seguintes campos: ataque (inteiro), defesa (inteiro), carisma (inteiro), pontos_vida (inteiro) e id_guerreiro (inteiro).

1.2.  Escreva uma função de nome rolaDados que simula a rolagem de três dados de seis faces tradicionais (1 a 6) e retorna a soma dessas rolagens. Note que somar os valores resultantes da rolagem de três dados de seis faces é diferente de rolar um dado que retorna um número entre 3 e 18.

1.3. Escreva um procedimento de nome criaGuerreiro que recebe um Guerreiro por passagem de parâmetro por referência e que atribui valores aos seus campos de batalha:  ataque, carisma e defesa, nessa ordem. Os seus campos de batalha devem receber um valor inteiro da função rolaDados. Depois, atribua um valor para o campo pontos_vida, que  deve receber a soma dos valores retornados por três execuções da função rolaDados. Assuma que o campo id_guerreiro já foi preenchido fora da função.

1.4. Escreva uma função de nome bonusCarisma que recebe um valor de carisma como parâmetro e retorna o bônus dado por esse valor de carisma. A tabela de bônus funciona da seguinte maneira:

    Carisma 18: o guerreiro é extremamente carismático e tem todo o apoio da torcida, recebendo um bônus de +3.
    Carisma 16 e 17:  o guerreiro é muito carismático e tem o apoio de quase toda a torcida, recebendo um bônus de +2.
    Carisma 14 e 15:  o guerreiro é carismático e tem o apoio de alguns torcedores, recebendo um bônus de +1.
    Carisma 6 e 7:  o guerreiro é antipático, e tem alguma torcida contra ele, recebendo uma penalidade de -1.
    Carisma 4 e 5:  o guerreiro é muito antipático, e tem quase toda a torcida contra ele, recebendo uma penalidade de -2.
    Carisma 3:  o guerreiro é extremamente antipático, e tem toda a torcida contra ele, recebendo uma penalidade de -3.
    Para qualquer outro valor de carisma, a sua função deve retornar 0.

1.5. Escreva um procedimento de nome ataca que recebe dois Guerreiros por passagem de parâmetro por referência e simula um ataque do primeiro guerreiro no segundo. O ataque é dado da seguinte maneira:

O primeiro guerreiro rola três dados e soma os seus valores com o seu campo ataque e com o seu bônus de carisma. Essa soma é o valor do golpe do primeiro guerreiro.

O segundo guerreiro rola três dados e soma os seus valores com o seu campo defesa e com o seu bônus de carisma. Essa soma é o valor do escudo do segundo guerreiro. 

Faça dano = golpe - escudo. Se o dano for maior que zero, subtraia dano dos pontos_vida do segundo guerreiro. Ao subtrair o dano, considere que o campo pontos_vida não pode ter valores menores que zero. 

Exercício 2

Escreva um programa que simula a batalha até a morte entre dois guerreiros. Para isso, crie dois guerreiros, um com id_guerreiro = 1 e outro com id_guerreiro = 2. Depois, atribua valores aleatórios para os seus campos de batalha a partir da função criaGuerreiro e inicie ataques intercalados entre esses guerreiros, ou seja, comece com o guerreiro 1 atacando o 2, depois o 2 atacando o 1, depois o 1 atacando o 2, e assim por diante. Para simular um ataque, use a função ataca. A batalha deve acabar quando um dos jogadores, o perdedor, alcançar 0 pontos_vida. Imprima na tela “\nVencedor: “ e logo em seguida o identificador do guerreiro vencedor (exemplo de impressão: “\nVencedor: 1”). Imprima também “\nPontos de vida restantes: ” e os pontos de vida restantes do guerreiro vencedor. 

Este exercício deve usar o módulo jogo criado no exercício anterior e deve ser implementado no arquivo testajogo.c.

DESAFIO PARA OS FORTES

Escreva um programa que simula um campeonato entre 16 guerreiros. Este campeonato deve ser do tipo mata-mata, ou seja, eliminatório. Na primeira rodada, simule 8 batalhas entre os 16 guerreiros, em que o guerreiro 1 enfrenta o 2, o 3 enfrenta o 4, e assim por diante. Depois, simule batalhas entre os vencedores dos confrontos, ou seja, o vencedor do confronto 1 enfrenta o vencedor do confronto 2, o vencedor do confronto 3 enfrenta o vencedor do confronto 4, e assim por diante. Repita esse procedimento até chegar no campeão. Imprima o seu identificador e a sua quantidade de pontos de vida. 

Este exercício deve usar o módulo jogo criado no exercício anterior e deve ser implementado no arquivo testacampeonato.c.
</details>
  
### Prática 11
  
<details>
  <summary>Clique aqui</summary>
    Problema

Você recebeu um arquivo cartelas.txt contendo 1 milhão de apostas feitas na mega-sena. Neste exercício, você deve verificar duas coisas. Primeiro, conte e imprima o número de cartelas que foram vencedoras. Os números sorteados foram: 6, 9, 22, 23, 48, 52. Depois, à título de curiosidade, você deve contar quantas pessoas apostaram nos números do seriado Lost, que são: 4, 8, 15, 16, 23, 42.

    Teoria

    Para abrir um arquivo, você deve usar o comando fopen da linguagem C. Exemplo:

    FILE *arq;
    arq = fopen("cartelas.txt", "r");

A variável arq, que é um ponteiro para FILE, recebe da função fopen o endereço de memória que aponta para a região da memória em que as informações do arquivo cartelas.txt são armazenadas. Ou seja, a partir da variável arq, você pode agora ler dados do arquivo cartelas.txt.

Para ler dados numéricos de um arquivo que você já abriu a partir da função fopen, você deve usar o comando fscanf. Exemplo:

    int n;
    fscanf(arq, "%d", &n);

Note que a função fscanf é muito parecida com a função scanf. Na verdade, a única diferença entre elas é que, na função fscanf, o primeiro parâmetro é o fluxo de dados (ou arquivo) do qual você quer ler dados. No comando acima, a função fscanf leu um inteiro do arquivo arq e o armazenou na variável n.

À cada chamada da função fscanf, novos dados do arquivo serão lidos. Veja o código abaixo:

    while(feof(arq) == 0) {
    	fscanf(arq, "%d", &n);
	    printf("\nli: %d", n);
    }

Neste exemplo, a função feof verifica se ainda existem dados para serem lidos do arquivo arq, ou seja, se ainda não é fim de arquivo. Caso seja fim de arquivo, a função feof retorna 1. Caso ainda existam dados para serem lidos, a função retorna 0. Assim, o código anterior lê um inteiro do arquivo e o imprime enquanto houver dados para serem lidos. Quando for fim de arquivo, a função feof retorna 0 e o while é encerrado.

Por fim, depois que você leu todos os dados relevantes do arquivo, você deve fechá-lo e desalocar a memória dedicada à ele. Para isso, use a função fclose, como no exemplo abaixo:

    fclose(arq);
    
DICA: Para resolver o exercício desta prática, sugiro que comecem devagar. Primeiro, tentem ler e exibir na tela todos os números contidos no arquivo. Depois tentem armazenar os seis números de uma cartela em um vetor de inteiros, para que você possa comparar com a combinação vencedora. Quando for fazer a comparação, sugiro antes ordenar os números da cartela, pois sem isso você terá que testar todas as combinações possíveis. Na aula de 
“Passagem de Parâmetros” uma função que executa algoritmo de ordenação selection sort é descrita.

Gabarito: há apenas uma cartela vencedora, mas há 6 cartelas que apostaram os números do seriado Lost.

DESAFIO PARA OS FORTES

Além dos vencedores, imprimir também o número de cartelas que conseguiram a quadra (acertar quatro números) e a quina (acertar cinco números).
</details>
  
### Prática 12
  
<details>
  <summary>Clique aqui</summary>
    O professor armazena as notas de cada disciplina que leciona em um arquivo diferente (GAAL.txt, AEDS1.txt etc).

Formato dos arquivos: matrícula, nome, nota1, nota2

O programa pratica12.c está incompleto, então você deve modificá-lo para implementar as seguintes funcionalidades:

Exercício 1: permitir que o professor possa escolher se deseja ou não que a média das notas seja exibida junto com a listagem do conteúdo do arquivo.

Exercício 2: permitir que  o nome do arquivo e seu modo de exibição sejam opções definidas como parâmetros de execução do programa.

Exercício 3: permitir que as notas dos alunos possam ser modificadas.
</details>
  
### Prática 13
  
<details>
  <summary>Clique aqui</summary>
    Alocação dinâmica de matrizes

Escreva um programa para ler um número inteiro n do teclado e criar dinamicamente uma matriz n x n de pontos flutuantes, atribuindo 0.0 a todas as suas posições. Uma matriz de pontos flutuantes de dimensões n x n é, na verdade, um vetor de n ponteiros para pontos flutuantes em que cada ponteiro deste vetor aponta para um vetor de n pontos flutuantes. Assim, para resolver esse exercício, primeiro aloque dinamicamente um vetor de n posições de ponteiros para pontos flutuantes. Depois, para cada posição i deste vetor, aloque um vetor de tamanho n de pontos flutuantes e atribua 0.0 a cada uma das suas posições. Por fim, imprima a matriz. 

DESAFIO: faça a alocação da matriz em uma função.

Editor de textos

Implemente um programa para ler um texto de tamanho indefinido, armazená-lo em uma variável e imprimi-lo novamente na tela.

Passo a passo

    1) Você deve ler caractere por caractere usando a função getche(). Para ler um caractere usando essa função, faça char c = getche().
    2) Todo o texto lido deve ser armazenado na memória a partir de alocação dinâmica. Crie um ponteiro para caractere (char *texto) para apontar para essa área de memória.
    3) Antes de alocar memória para os caracteres, você deve armazenar temporariamente os caracteres lidos em um vetor de caracteres (char buffer[BUFFER_TAM]) de BUFFER_TAM  posições. Para isso, conte os caracteres lidos usando uma variável (ex: int contBuffer) e armazene-os no vetor fazendo buffer[contBuffer]=c. Faça #define BUFFER_TAM 5.
    4) Quando o vetor buffer estiver cheio, aloque dinamicamente outro espaço em memória e transfira todo o conteúdo do buffer para este espaço. Ao final,  variável texto deverá receber o endereço para essa memória alocada:
        texto = (char*)malloc((contBuffer)*sizeof(char));
    
Os detalhes desse processo são descritos a seguir. Sempre que vetor buffer estiver cheio, aloque um novo espaço em memória para receber o conteúdo do buffer mais o conteúdo apontado pela variável texto. Crie um apontador de caracteres temporário de nome char *textoaux para apontar para esse espaço de memória. Transfira para esse espaço o conteúdo apontado por texto (caso exista) e, em seguida, o conteúdo de buffer.

    5) Depois de fazer a transferência do item anterior, libere a memória apontada pelo apontador texto (que contém o texto desatualizado) e faça o apontador texto receber o endereço apontado por textoaux (que contém o texto atualizado). Dessa maneira, o apontador texto apontará para um espaço em memória que contém todo o texto digitado até o momento.
    6) Este processo deve se repetir até que o caractere '#' seja digitado pelo usuário. Esse caractere não deve ser armazenado mas, ao invés dele, deve-se armazenar o caractere '\0', delimitando o fim da string.
    7) Observação importante: No Windows, se você apertar a tecla ENTER, os caracteres '\r' e '\n' serão enviados do teclado para a função char c = getche(). Dessa maneira, a variável c receberá somente '\r', que retorna para o início da linha. Para fazer a quebra de linha corretamente, use o seguinte código após ler o caractere c:


    if(c == '\r'){
      c = '\n';
	  printf("\n");
    }

Pseudo-código

Há outras maneiras de resolver este problema, algumas melhores que a apresentada abaixo!

    #define BUFFER_TAM 5    
    Faça contBuffer = 0
    faça {    
      leia o caractere c do teclado
      se c == '\r', faça c = '\n' e imprima '\n' na tela    
      se o buffer estiver vazio, faça buffer[contBuffer] = c e contBuffer++    
      se o buffer estiver cheio ou c == '#', faça {
      aloque memória para armazenar o conteúdo do buffer mais o do texto até o momento armazenado
          faça textoaux apontar para essa área de memória
            transfira o conteúdo do texto e do buffer para essa área de memória
          desaloque a área previamente alocada para o texto, caso exista
            faça texto = textoaux
          zere o contador do buffer
    }
    } enquanto (c != '#')
    texto[countTotal-1] = '\0';
    imprima o texto
    desaloque a memoria alocada para o texto

</details>
  
### Prática 14
  
<details>
  <summary>Clique aqui</summary>
  
    1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
        
        S = 1³ + 2³ + … + n³.

    2) Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em ordem crescente.

    3) Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em ordem decrescente.

    4) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.

    5) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.

    6) Escreve uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de x^y (x elevado a y) para o programa principal, considere x e y inteiros positivos. Você não pode usar a função pow.

    7) Escreva uma função que recebe uma string como parâmetro e a imprima invertida.

    8) Escreva uma função recursiva que receba um valor inteiro x(positivo) e o retorne invertido. Exemplo: se x = 123, a função deve retornar 321.

    9) Escreva uma função recursiva que receba um valor inteiro(positivo) em base decimal e o imprima em base binária.

    10) Escreva uma função recursiva que retorne o menor elemento em um vetor.
</details>
