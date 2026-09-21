// Projeto sistema de votação fase inicial Implementação da logica e evolução do programa.
//Fase 2 Implementação do laço de repetição While.
// Fase 3 Implementação a logica de confirma e implementação do vencedor da eleição. Implementação da função de limpar tela.

#include <stdio.h>
#include <stdlib.h> // Inclusão da biblioterca stdlib.h
 int main(){
// Área de declaração das variaveis.    
 int NumeroCandidato1 = 22;
 int NumeroCandidato2 = 13;
 int votoDigitado;
 // Variáveis contoadora de voto
 int TotalVotos1 = 0;
 int TotalVotos2 = 0;
 int TotalVotosNulo = 0;
 int VotBranco = 0;
 int confirma;

    //Inicio do programa solicitando que a pessoa digite o voto.   
    //Área do laço de Repetição
    while (1)
    {
       printf("\033[H\033[J"); // Comando de limpar tela.
        printf("SEU VOTO PARA PRESIDENTE\n");
        scanf("%d", &votoDigitado);
        printf("\n");

    
        
        //Estrutura do sistema de votação.
        if (votoDigitado == -1)
        {
            printf("Votação Encerrada!\n");
            printf("\n");
           break;
        } 
        else if (votoDigitado == NumeroCandidato2)
        {
            printf("Seu voto foi no candidato 2?\n");
             printf("CONFIRMA; 1 = Sim / 2 = Corrige \n");
            scanf("%d", &confirma);

             if (confirma == 1)
            {
             printf("Seu voto foi confirmado!\n");   
             TotalVotos2 ++;  
             
            printf("Pressione enter para continuar\n");
            getchar();
            getchar();
            }   
            printf("\n");
        } 
        else if (votoDigitado == NumeroCandidato1)
        {
            printf("Você votou no candidato 1\n");
            printf("CONFIRMA: 1 = Sim / 2 = Corrige \n");
            scanf("%d", &confirma);
           
            if (confirma == 1)
            {
             printf("Seu voto foi confirmado!\n");   
             TotalVotos1 ++;  

            printf("Pressione enter para continuar\n");
            getchar();
            getchar();
            }    
            
            printf("\n");
        }
        else if (votoDigitado == 0)
        {
            printf("Seu voto foi em Branco!\n");
            printf("CONFIRMA: 1 = Sim / 2 = Corrige \n");
            scanf("%d", &confirma);

            if (confirma == 1)
            {
             printf("Seu voto foi confirmado!\n");   
             VotBranco ++;

            printf("Pressione enter para continuar\n");
            getchar();
            getchar();
            }    
            printf("\n");
        }
        
        
         else {
            printf("Seu voto foi Nulo!\n");
            printf("CONFIRMA: 1 = Sim / 2 = Corrige \n");
            scanf("%d", &confirma);

            if (confirma == 1)
            {
             printf("Seu voto foi confirmado!\n");   
             TotalVotosNulo ++;

             printf("Pressione enter para continuar\n");
             getchar();
             getchar();
            }
        }
        printf("\n");

    }  //Área que mostra a quantidade de votos dos candidatos
        printf("Resultado da Votação\n");
        printf("Candidato 1: %d Votos\n ", TotalVotos1);
        printf("\n");
        printf("Candidato 2: %d Votos\n", TotalVotos2);
        printf("\n");
        printf("Votos Nulos: %d Votos\n", TotalVotosNulo);
        printf("\n");
        printf("Votos Branco: %d Votos\n", VotBranco);
// Área de declarção do camapeao ou empate.
    if (TotalVotos1 > TotalVotos2)
    {
      printf("O vencedor foi o candidato 1");

    } else if (TotalVotos2 > TotalVotos1)
    {
       printf("O vencedor foi o candidato 2");
    } else
    {
        printf("Houve empate, será necessario um segundo turno");
    }
     printf("\n");
    
   
    



    return 0;

 }
