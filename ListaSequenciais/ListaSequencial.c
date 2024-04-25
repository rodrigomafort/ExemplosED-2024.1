#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	//qualquer outro campo deve ser definido aqui

} elemento;

int Inserir(elemento L[], int* nElementos, int tamMax)
{
	if (*nElementos < tamMax)
	{
	    printf("Digite a chave para inserir: ");
		scanf("%d", &L[*nElementos].id);
		//Demais campos devem ser lidos aqui

		*nElementos = *nElementos + 1;
		return 1;
	}
	else
	{
		return 0;
	}
}

int Buscar(elemento L[], int nElementos, int idBuscado)
{
	for (int i = 0; i < nElementos; i++)
		if (L[i].id == idBuscado)
			return i;
	return -1;
}

int Remover(elemento L[], int* nElementos, int idRemocao)
{
	int pos = Buscar(L, *nElementos, idRemocao);
	if (pos == -1)
		return 0;

	L[pos].id = L[*nElementos - 1].id;
	//Demais campos devem ser copiados aqui, seguindo modelo acima

	*nElementos = *nElementos - 1;
	return 1;
}

void Imprimir(elemento L[], int nElementos)
{
	for (int i = 0; i < nElementos; i++)
		printf("%d ", L[i].id);
    printf("\n");
}

int main()
{
	int tamanho;
	do
	{
		scanf("%d",&tamanho);
	}
	while (tamanho <= 0);

	int nElementos = 0;

	elemento* lista = (elemento*) malloc (tamanho * sizeof(elemento));
	Inserir(lista, &nElementos, tamanho);
	Inserir(lista, &nElementos, tamanho);
	Inserir(lista, &nElementos, tamanho);
	Imprimir(lista, nElementos);

	int chave;
	printf("Digite a chave para buscar: ");
	scanf("%d", &chave);
	printf("Busca: %d\n", Buscar(lista, nElementos, chave));

	while (nElementos > 0)
	{
		printf("Digite a chave para remover: ");
		scanf("%d", &chave);
		Remover(lista,&nElementos, chave);
		Imprimir(lista, nElementos);
	}

	free(lista);

	return 0;
}

