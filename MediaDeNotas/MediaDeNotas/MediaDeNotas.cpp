// Este programa obtem 3 notas do usuario, calcula a media e exibe a media na tela.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void obterNota();
void calculeNota(float n1, float n2, float n3);
void mostrarMedia(float media);
void limparBuffer();

/* Fun��o Principal.
*/
int main()
{
	obterNota();
	std::cin.get();
    return 0;
}

/* Essa funcao obtem tres notas do usuario,
 * armazena nas variaveis e usa os valores
 * como argumento para chamada de funcao.
*/
void obterNota()
{
	std::cout << "Insira a primeira nota > ";
	float nota_1;
	std::cin >> nota_1;
	limparBuffer();

	std::cout << "\nInsira a segunda nota > ";
	float nota_2;
	std::cin >> nota_2;
	limparBuffer();

	std::cout << "\nInsira a terceira nota > ";
	float nota_3;
	std::cin >> nota_3;
	limparBuffer();

	calculeNota(nota_1, nota_2, nota_3);
}

/* Essa funcao recebe os parametros passados,
 * faz o calculo da media e chama outra funcao
 * com o resultado como argumento.
*/
void calculeNota(float n1, float n2, float n3)
{
	mostrarMedia((n1 + n2 + n3) / 3);
}

/* Essa funcao exibe a media das notas na tela.
*/
void mostrarMedia(float media)
{
	std::cout << "\nMedia das notas: " << media;
}

/* Limpa erros e caracteres do buffer de entrada.
*/
void limparBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
