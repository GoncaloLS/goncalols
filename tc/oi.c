inicio:

funcao BidirectionalSelectionSort()

/*------Definição de Variáveis------
                                                           */
A, TROCA, TAMANHODOARRAY:inteiro
B:caractere
ARRAY[200]:inteiro

/*------Input dos valores a serem ordenados */
Escrever "Introduza os caracteres a serem ordenados"
Ler ARRAY[]
Escrever "Introduza o tamanho do vector"
Ler TAMANHODOARRAY

/* Ordenação Bidirecional */
Repita{
  TROCA = 0
  A = TAMANHODOARRAY - 1
  Para(A > 0){
    Se(ARRAY[A-1] > ARRAY[A]){
      B = ARRAY[A-1]
      ARRAY[A-1] = ARRAY[A]
      ARRAY[A] = B
      TROCA = 1
    } A = A - 1
  }
  A = 1
  Para(A < TAMANHODOARRAY){
    Se(ARRAY[A-1] > ARRAY[A]){
      B = ARRAY[A-1]
      ARRAY[A-1] = ARRAY[A]
      ARRAY[A] = B
      TROCA = 1
    } A = A + 1
  }
} Enquanto(TROCA) }

Escrever "O conteúdo ordenado é: "
Escrever ARRAY
FIM DE PROGRAMA
