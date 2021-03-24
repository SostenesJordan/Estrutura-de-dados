#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{
	setlocale(LC_ALL , "portuguese-brazilian");

	int* vetor;

	int tam;
	cout << "informe o tamanho da estrutura :"<<endl;

	cin >> tam;

	vetor = (int*) malloc(tam * sizeof(int));
	// função malloc está alocando o apartir do valor inicial de "tam"

	if (vetor == 0)
	{
		cout << "OPS! Algo deu errado";
		return 0;
		// para valores nulos
	}


	for (int i = 0; i < tam; i++)
	{
		cout << "Informe o elemento da posição "<<i+1<<" : "<<endl;
		cin >> vetor[i];
		//vai receber a quantidade de posições do array 
	}

	cout <<"vetor informado :"<< endl;

	for (int i = 0; i < tam; i++)
	{
		cout << vetor[i]<<" ";
		//vai dizer os valores do array
	}
	 
	cout <<endl<< "A posição na memoria da sua estrutura é : "<<endl;
	for (int i = 0; i < tam; i++)
	{
		cout <<vetor[i]<<" esta na posição --> "<< &vetor[i] <<endl<<endl;
		//serve para dizer a posição na memoria de cada valor informado
	}

	free(vetor);
	//free é uma função para limpar o vetor
	return 0;
}


