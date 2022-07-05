#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	float bc1, bc2, bc3, bc4, bc5, bc6, bc7;
	bc1=1903.99;
	bc2=2826.65;
	bc3=2826.66;
	bc4=3751.05;
	bc5=3751.06;
	bc6=4664.68;
	bc7=4664.69;

float al1, al2, al3, al4;
	al1=0.075;
	al2=0.15;
	al3=0.225;
	al4=0.275;

float pd1, pd2, pd3, pd4;
	pd1=142.80;
	pd2=354.80;
	pd3=636.13;
	pd4=869.36;

float sal, res;

printf("R12\n\n");

	printf("Ola, deseja saber o valor de sua contribuicao ao IR?\n\n");
	printf("Obs. Ao digitar os centavos, favor separa por um ponto (.) ex: 1000.01\n\n\n\n");
	printf("Digite o valor de seu salario: ");
	scanf("%f", &sal);

	if(sal >= bc1){
		
		if(sal <= bc2){
			res=((sal*al1)-pd1);
			printf("\n\tValor a contribuir ao IR: %f\n\n",res);	
		}
			else if(sal <= bc4){
					res=((sal*al2)-pd2);
					printf("\n\tValor a contribuir ao IR: %f\n\n",res);	
			}
		
				else if(sal <= bc6){
					res=((sal*al3)-pd3);
					printf("\n\tValor a contribuir ao IR: %f\n\n",res);		
				}
					else{
						res=((sal*al4)-pd4); printf("\n\tValor a contribuir ao IR: %f\n\n",res);
					}
			
		} 	else{printf("\n\tIsento de contribuicao ao IR\n\n",res);}
			
}


				/*	else if (res > 0){
					printf("\n\tIsento de contribuicao do IR\n\n");
				} */
