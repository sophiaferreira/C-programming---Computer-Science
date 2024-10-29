```
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct reg *no;
struct reg {
    int data;
    struct reg *link;
};

void criaLista(no *lista);
void incluiFinal(no *lista, int data);
void mostraLista(no lista);
void contaNos(no lista);
int buscaLista(no lista, int pesquisa);

int main() {
	int pesquisa;
    int data;
    no lista;
    char resp;

    criaLista(&lista); // lista = NULL; por &: estou permitindo que 
    //a função que o recebe, possa modificar o valor original do ponteiro.
    //isso é útil em situações onde você deseka que as alterações feitas dentro da função
    //se reflitam fora dela.

    do {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &data);
        incluiFinal(&lista, data);
        mostraLista(lista);
        contaNos(lista);
        printf("\n\nContinua (S/N)? ");
        do {
            resp = toupper(getchar());
        } while (resp != 'N' && resp != 'S');
    } while (resp != 'N');


	printf("\n\nBusca de um elemento na lista\n");
	printf("Digite um numero inteiro: ");
	scanf("%d",&pesquisa);
	
	if(buscaLista(lista,pesquisa))
	printf("\n--> %d pertence a lista!\n",pesquisa);

	else
	printf("\n--> %d nao pertence a lista!\n",pesquisa);
	
    return 0;
}

// Cria uma lista vazia
void criaLista(no *lista) {
    *lista = NULL;
}


void incluiFinal(no *lista, int data){
		
	no p = (no) malloc(sizeof(struct reg));
	p->data = data;
	p->link = NULL;
	
	if(*lista == NULL)
	*lista = p;
	
	else{
		no q = *lista;
		while(q->link)
		q = q->link;
	q->link = p;
	}

}

// Mostra os elementos da lista
void mostraLista(no lista) {
    no p = lista;
    printf("\nElementos da lista: ");
    while (p) {
        printf("%d -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}

//conta quantos elementos têm na lista
void contaNos(no lista){
	
	int count = 0;
	
	no p = lista;
	
	if(p == NULL)
	printf("A lista esta vazia!");
	
	while(p != NULL){
		count++;
		p = p->link;
	}
	
	printf("\nQuantidade de nos: %d\n",count);
	
}

int buscaLista(no lista, int pesquisa){

	no p = lista;
	
	while(p){

		if(p->data == pesquisa)
		return 1;
		p = p->link;
	}
	
	return 0;
	
}
```


