// ----------------------------------------------------------
// ---- Definicao dos tipos de dado -------------------------
// ----------------------------------------------------------
struct Pessoa {
   char* nome;
   int  idade;
   };

// ----------------------------------------------------------
// ---- Definicao dos tipos de ponteiros para funcao---------
// ----------------------------------------------------------
typedef  int  (*FuncaoComparacao)   (void*, void*);
typedef  int  (*FuncaoPredicado)    (void*);
typedef  void (*FuncaoOperacao)     (void*);
typedef  void (*FuncaoPessoa)       (struct Pessoa);

// ----------------------------------------------------------
// --------- Assinaturas das funções ------------------------
// ----------------------------------------------------------
/* a funcao bubbleSort e aquela mesma discutida em aula, esta pronta */
void bubbleSort(void* [], int, FuncaoComparacao);

/* o objetivo da funcaoo "encontrarMaior" e retornar o maior valor contido no vetor
*/
void* encontrarMaior(void* [], int, FuncaoComparacao);

/* o objetivo da funcao "contar" e contabilizar a quantidade de elementos do
   vetor que atendem a um determinado predicado
*/
int contar(void* [], int, FuncaoPredicado);

/* o objetivo da funcao "aplicarOperacao" e executar uma operacao em cada elemento do
   vetor, alterando seu conteudo conforme a operacao aplicada
*/
void aplicarOperacao(void* [], int, FuncaoOperacao);

/* o objetivo da funcao "identificarMenoresIdade" e realizar o processamento das
   pessoas que tem idade menor de 18 anos. O processamento pode consistir apenas
   na impressao do nome das pessoas menores de idade, ou ser algo mais complexo,
   como a transmissao dos nomes das pessoas para outro sistema ou armazenamento em
   arquivo.
*/
void identificarMenoresIdade(struct Pessoa[], int, FuncaoPessoa);


// ----------------------------------------------------------
// --------- implementacao das funcoes descritas acima-------
// ----------------------------------------------------------
void bubbleSort(void* dados[], int tam, FuncaoComparacao pfc) {

   int   res, i, j, r;
   void* temp;

   for (i = 0; i < tam - 1; i++) {
      /*printf("Iteracao %d \n", i+1);*/
      for (j = 0; j < tam - (i + 1); j++) {
         /* invocacao da funcao de comparacao por meio do ponteiro para funcao*/
         r = pfc(dados[j], dados[j + 1]);
         if (r < 0) {
            temp = dados[j];
            dados[j] = dados[j + 1];
            dados[j + 1] = temp;
            }
         }
      }
   }

//---------------------------------------------------------------
void* encontrarMaior(void* dados[], int tam, FuncaoComparacao pfc) {


   }

//---------------------------------------------------------------
int contar(void* dados[], int tam, FuncaoPredicado pfp) {
   int i, contador = 0;
   for (i = 0; i < tam; i++) {
      if (pfp(dados[i]) != 0) {
         contador++;
         }
      }

   return contador;
   }

//---------------------------------------------------------------
void aplicarOperacao(void* dados[], int tam, FuncaoOperacao pfo) {

   }

//---------------------------------------------------------------
void identificaMenoresIdade(struct Pessoa pessoas[], int tam, FuncaoPessoa pfp) {

   }
