/*
Olá jogador, hoje iremos brincar um pouco e aprender também!! 
Primiero passo: colocar o seu nome e depois responder algumas perguntas referente as energias renovaveis e o meio ambiente.
Serão perguntas com 4 opções de escolhas.

Boa sorete e bora jogaaar!!

*/


#include <stdio.h>
int main (void)
{
	char jogador[20], resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9;
	
	printf ("\n Qual o nome do seu jodagor: \n ", jogador);
	scanf ( "%s", jogador);
	
	// Pergunta 1 - Energia hidrelétrica de Itaipu.

	printf ("\n A 1. hidreletrica de Itaipu, que atualmente esta entre as tres maiores usinas hidreletricas do mundo em capacidade instalada, abastece qual(s) pais (es)?");
	printf ("\n A - Somente o Brasil. \n B - Brasil, Paraguai e Uruguai. \n C - Brasil e Paraguai.  \n D - Brasil e Argentina. \n\n");
	fflush (stdin);
	resp1 = getchar();
	switch (resp1)
	{
	case 'A':
		printf ("\n Parabens!! Resposta certa.");
	
		break;
	case 'B':
	case 'C':
	case 'D':
		printf ("\n Vixe. Resposta errada.");
	
		break;
		
		 default:
        printf("Resposta Invalida");
	
	}
	
	// Pergunta 2 - Energia Solar

	printf ("\n 2. Qual o pais que mais utliza energia solar?");
	printf ("\n A - Japao. \n B - China. \n C - Alemanha. \n D - Estados Unidos \n\n");
	fflush (stdin);
	resp2 = getchar();
	switch (resp2) 
	{
	case 'A':
		printf ("\n Vixe. Resposta errada.");
			printf ("\n\n HORA DA CURIOSIDADE: A capacidade total do pais, conforme dados de 2016, era de 42.800 megawhatts. \n Em novembro de 2018, foi inaugurada a maior usina geradora do pais, com 900 mil paineis fotovoltaicos, ocupando uma area de 265 hectares. \n");
		
		break;
	case 'B':
		printf ("\n Parabens!! Resposta certa.");
		printf ("\n\n HORA DA CURIOSIDADE: O país asiático tem a maior capacidade instalada de produção de energia solar do mundo, alcançando 130 gigawhatts — apenas a título de comparação, a capacidade brasileira atual fica em torno de 2 gigawhatts. \n");
		
		break;
	case 'C':
		printf ("\n Vixe. Resposta errada.");
		printf ("\n\n HORA DA CURIOSIDADE: Apesar de estar longe de ser um país privilegiado em termos de insolacao, como o Brasil, a capacidade de producao da Alemanha alcança 41.200 megawhatts, o que corresponde a 13,6% da producao global. \n");
		
		break;
		
	case 'D':
		printf ("\n Vixe. Resposta errada.");
		printf ("\n\n HORA DA CURIOSIDADE:O pais conta com mais de 40 mil megawhatts de capacidade instalada, o que corresponde a mais de 13% da geracao de energia solar no mundo. \n\n ");
		
		break;	
		 default:
        printf("Resposta Invalida");
	}
	
	// Pergunta 3 - Energia renovavel no brasil

	printf("\n 3. Qual das energias renovaveis eh a mais utilizada no Brasil?\n");
	printf("\n A- Energia Solar. \n B- Energia Eolica. \n C-Energia Biomassa. \n D- Energia hidreletrica. \n\n");
	fflush (stdin);
	resp3 = getchar();
	switch (resp3) 
	{
		
	case 'A':
	case 'B':
	case 'C':
		printf("\n Vixe. Resposta errada.");
		printf("\n\n De acordo com o Ministerio de minas e energia, a maior parte eh produzida pelas usinas hidreletricas. \n\n");
		
	case 'D':
		printf("\n Muito bem!! Resposta correta. \n");		

		break;
	default:
        printf("\n Resposta Invalida");
	}
		
	
	// Pergunta 4 - Energia Geotérmica
    
	printf("\n 4. Do que se trata a energia geotermica? \n");
    printf("\n A - Energia proveniente do sol. \n B - Energia obtida do movimento das aguas. \n C - Energia do calor interno da Terra. \n D - Energia produzida pela queima de biomassa.\n");
    fflush(stdin);
    resp4 = getchar();
    switch (resp4) 
	{
    case 'A':
    case 'B':
    case 'D':
        printf("\n Vixe. Resposta errada.");
        printf("A Energia geotermica se refere à energia térmica armazenada e gerada dentro da Terra. Essa energia pode ser aproveitada para producao de eletricidade, aquecimento e resfriamento de edificios, entre outras aplicacoes.");
        break;
    case 'C':
        printf("\n Parabens!! Resposta correta.");
        printf("A Energia geotermica se refere a energia termica armazenada e gerada dentro da Terra. Essa energia pode ser aproveitada para producao de eletricidade, aquecimento e resfriamento de edificios, entre outras aplicacoes.");

        break;
    default:
        printf("\n Resposta Inválida");
    }
	

	// Pergunta 5 - Energias renovaveis

	printf("\n 5. Quais sao os principais tipos de energia renovavel? \n");
	printf("\n A - Hidreletrica e Petroleo. \n B - Gas Natural e Biomassa. \n C - Solar e Eolica. \n D - Carvao e Gas Natural.\n\n");
    fflush(stdin);
    resp4 = getchar();
    switch (resp4)
	 {
    case 'A':
    case 'B':
    case 'D':
        printf("\n Vixe. Resposta errada.");
        break;
    case 'C':
        printf("\n Parabens!! Resposta correta.");
        break;
    default:
        printf("\n Resposta Invalida");
    }

	//Pergunta 6 - Principal Fonte de Biomassa
	
    printf("\n 6. Qual eh a principal fonte de biomassa usada na producao de energia? \n\n");
    printf("\n A - Milho. \n B - Cana-de-acucar. \n C - Madeira. \n D - Algas.\n\n");
    fflush(stdin);
    resp6 = getchar();
    switch (resp6) 
	{
    case 'A':
    case 'B':
    case 'D':
        printf("\n Vixe. Resposta errada.");
        break;
    case 'C':
        printf("\n Parabens!! Resposta correta.");
        break;
    default:
        printf("\n Resposta Inválida");
    }

	//Pergunta 7 - energias renovaveis
	
	printf(" \n 7. Como as energias renovaveis ajudam na reducao das emissoes de gases de efeito estufas?");
	printf("\n A- Reduzindo a dependencia de combustiveis fosseis. \n B- Nao tem impacto nas emissoes.\n C- Aumentando a queima de combustiveis fosseis.\n D- Causando mais poluicao atmosferica.\n\n");
	fflush(stdin);
    resp7 = getchar();
    switch (resp7) 
	{
	case 'A':
        printf("\n Parabens!! Resposta correta.");
        break;
    case 'B':
    case 'C':
    case 'D':
        printf("\n Vixe. Resposta errada.");
        break;
    
        break;
    default:
        printf("\n Resposta Invalida");

	}	
	
	//Pergunta 8 - São Paulo e hidreletrica de Itaipu
	
	printf(" \n 8. Sao Paulo poderia ser abastecido pela hidreletrica de Itaipu por quantos anos?\n\n");
	printf(" A- 5 ANOS. \n B- 190 ANOS. \n C- 20 ANOS. \n D- 99 ANOS. \n");
	fflush(stdin);
    resp8 = getchar();
    switch (resp8)
	{
	case 'A':
	case 'B':
	case 'D':
	printf("\n\n Resposta invalida. \n ");
	printf("\n Com a quantidade de energia ja gerada, Itaipu seria capaz de suprir a demanda energetica do estado de Sao Paulo por 20 anos. \n\n ");

	break;
	
	case 'C':
	printf("\n Parabens!!");
	printf("\n Com a quantidade de energia ja gerada, Itaipu seria capaz de suprir a demanda energetica do estado de Sao Paulo por 20 anos.\n\n ");
	break;
	
	default:
        printf("\n Resposta Invalida");
	}	

	//Pergunta 9 - Energia Eolica de Osorio
	
	printf(" \n\n 9. Qual é o número aproximado de aerogeradores atualmente no Complexo Eólico de Osório?\n\n ");
	printf("\n\n A- 57 torres. \n B- 66 torres. \n C- 70 torres.\n D- 75 torres. \n\n ");
	fflush(stdin);
    resp9 = getchar();
    switch (resp9)
	 {
	 	case 'A':
	 	case 'B':
	 	case 'C':
	 	printf("\n\n Resposta invalida. \n ");
	 	printf("\n\n O Complexo Eolico de Osorio, localizado no Rio Grande do Sul, Brasil, possui aproximadamente 75 aerogeradores.\n\n");
	 	break;
	 	
	 	case 'D':
	 	printf("\n\n Resposta Correta!! \n\n");
	 	break;
	 	
	 	
	 	
	 }




    return 0;

	
}
