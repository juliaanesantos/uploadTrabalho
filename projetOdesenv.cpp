/*
Olá jogador, hoje iremos brincar um pouco e aprender também!! 
Primiero passo: colocar o seu nome e depois responder algumas perguntas referente as energias renovaveis e o meio ambiente.
Serão perguntas com 4 opções de escolhas.

Boa sorete e bora jogaaar!!

*/


#include <stdio.h>
int main (void)
{
	char jogador[20], resp1, resp2, resp3, resp4, resp5, resp6;
	
	printf ("\n Qual o nome do seu jodagor: \n ", jogador);
	scanf ( "%s", jogador);
	
	// Pergunta 1 - Energia hidrelétrica de Itaipu.

	printf ("\n A hidreletrica de Itaipu, que atualmente esta entre as tres maiores usinas hidreletricas do mundo em capacidade instalada, abastece qual(s) pais (es)?");
	printf ("\n A - Somente o Brasil. \n B - Brasil, Paraguai e Uruguai. \n C - Brasil e Paraguai.  \n D - Brasil e Argentina. \n\n");
	fflush (stdin);
	resp1 = getchar();
	switch (resp1)
	{
	case 'A':
		printf ("\n Parabens!! Resposta certa.");
	
		break;
	case 'B':
		printf ("\n Vixe. Resposta errada.");
		
		break;
	case 'C':
		printf ("\n Vixe. Resposta errada.");
	
		break;
	case 'D':
		printf ("\n Vixe. Resposta errada.");
	
		break;
		
		 default:
        printf("Resposta Invalida");
	
	}
	
	// Pergunta 2 - Energia Solar

	printf ("\n Qual o país que mais utliza energia solar?");
	printf ("\n A - Japao. \n B - China. \n C - Alemanha. \n D - Estados Unidos \n\n");
	fflush (stdin);
	resp2 = getchar();
	switch (resp2) 
	{
	case 'A':
		printf ("\n Vixe. Resposta errada.");
			printf ("\n\n HORA DA CURIOSIDADE: A capacidade total do país, conforme dados de 2016, era de 42.800 megawhatts. \n Em novembro de 2018, foi inaugurada a maior usina geradora do país, com 900 mil painéis fotovoltaicos, ocupando uma área de 265 hectares. \n");
		
		break;
	case 'B':
		printf ("\n Parabens!! Resposta certa.");
		printf ("\n\n HORA DA CURIOSIDADE: O país asiático tem a maior capacidade instalada de produção de energia solar do mundo, alcançando 130 gigawhatts — apenas a título de comparação, a capacidade brasileira atual fica em torno de 2 gigawhatts. \n");
		
		break;
	case 'C':
		printf ("\n Vixe. Resposta errada.");
		printf ("\n\n HORA DA CURIOSIDADE: Apesar de estar longe de ser um país privilegiado em termos de insolação, como o Brasil, a capacidade de produção da Alemanha alcança 41.200 megawhatts, o que corresponde a 13,6% da produção global. \n");
		
		break;
		
	case 'D':
		printf ("\n Vixe. Resposta errada.");
		printf ("\n\n HORA DA CURIOSIDADE:O país conta com mais de 40 mil megawhatts de capacidade instalada, o que corresponde a mais de 13% da geração de energia solar no mundo. \n\n ");
		
		break;	
		 default:
        printf("Resposta Invalida");
	}
	
	// Pergunta 3 - Energia renovavel no brasil

	printf("\n Quais das energias renováveis é a mais utilizada no Brasil?\n");
	printf("\n A- Energia Solar. \n B- Energia Eolica. \n C-Energia Biomassa. \n D- Energia hidreletrica. \n\n");
	fflush (stdin);
	resp3 = getchar();
	switch (resp3) 
	{
		
	case 'A':
	case 'B':
	case 'C':
		printf("\n Vixe. Resposta errada.");
		printf("\n\n De acordo com o Ministerio de minas e energia, a maior parte é produzida pelas usinas hidrelétricas. \n");
		
	case 'D':
		printf("\n Muito bem!! Resposta correta. \n");		

		break;
	default:
        printf("\n Resposta Inválida");
	}
		
	
	// Pergunta 4 - Energia Geotérmica
    
	printf("\n O que consiste na energia geotérmica?");
    printf("\n A - Energia proveniente do sol. \n B - Energia obtida do movimento das águas. \n C - Energia do calor interno da Terra. \n D - Energia produzida pela queima de biomassa.\n");
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
        printf("\n Parabéns!! Resposta correta.");
        break;
    default:
        printf("\n Resposta Inválida");
    }
	

	// Pergunta 5 - Energias renovaveis

	printf("Quais são os principais tipos de energia renovável?");
	printf("\n A - Hidreletrica e Petróleo. \n B - Gás Natural e Biomassa. \n C - Solar e Eólica. \n D - Carvão e Gás Natural.\n");
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
        printf("\n Parabéns!! Resposta correta.");
        break;
    default:
        printf("\n Resposta Inválida");
    }

	//Pergunta 6 - Principal Fonte de Biomassa
	
    printf("\n Qual é a principal fonte de biomassa usada na produção de energia?");
    printf("\n A - Milho. \n B - Cana-de-açúcar. \n C - Madeira. \n D - Algas.\n");
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
        printf("\n Parabéns!! Resposta correta.");
        break;
    default:
        printf("\n Resposta Inválida");
    }








    return 0;

	
}
