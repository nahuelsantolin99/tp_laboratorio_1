/*
 ============================================================================
 Name        : TP1.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int opcion;
	int kilometros;
	int precioAerolineas;
	int precioLatam;
	int descuento;
	int precioConDebitoAerolineas;
	int precioConDebitoLatam;
	int interes;
	int precioConCreditoAerolineas;
	int precioConCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	int precioPorKmAerolineas;
	int precioPorKmLatam;
	int diferenciaIngresada;

	setbuf(stdout,NULL);
	do{
		printf("1. Ingrese kilometros: \n" );
		printf("2. Ingresar precio de vuelos (Aerolineas = y, Latam = z): \n");
		printf("3. Calcular todos los costos \n");
		printf("4. Informar Resultados \n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");

		printf("Ingrese una opcion por favor: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				printf("Ingrese kilometros: ");
				scanf("%d", &kilometros);
				break;
			case 2:
				printf("Precio vuelo Aerolineas: ");
				scanf("%d",&precioAerolineas);

				printf("Precio vuelo Latam: ");
				scanf("%d", &precioLatam);
				break;
			case 3:
				descuento = precioAerolineas * 10 / 100;
				precioConDebitoAerolineas = precioAerolineas - descuento;

				descuento = precioLatam * 10 / 100;
				precioConDebitoLatam = precioLatam - descuento;

				interes = precioAerolineas * 25 / 100;
				precioConCreditoAerolineas = precioAerolineas + interes;

				interes = precioLatam * 25 / 100;
				precioConCreditoLatam = precioLatam + interes;

				precioBitcoinAerolineas = precioAerolineas / 4606954.55;
				precioBitcoinLatam = precioLatam / 4606954.55;

				precioPorKmAerolineas = precioAerolineas * kilometros;
				precioPorKmLatam = precioLatam * kilometros;

				diferenciaIngresada = precioAerolineas - precioLatam;

				break;
			case 4:
				printf("Los kilometros ingresados son: %d km \n", kilometros);

				printf("\nPrecio Aerolineas: %d $ \n", precioAerolineas);
				printf("a) Precio con tarjeta de debito: $ %d\n", precioConDebitoAerolineas);
				printf("b) Precio con tarjeta de credito: $ %d\n", precioConCreditoAerolineas);
				printf("c) Precio pagando con bitcoin: %f BTC\n", precioBitcoinAerolineas);
				printf("Mostrar precio unitario: $ %d\n", precioPorKmAerolineas);

				printf("\nPrecio Latam: %d $ \n", precioLatam);
				printf("a) Precio con tarjeta de debito: $ %d\n", precioConDebitoLatam);
				printf("b) Precio con tarjeta de credito: $ %d\n", precioConCreditoLatam);
				printf("c) Precio pagando con bitcoin: %f BTC\n", precioBitcoinLatam);
				printf("Mostrar precio unitario: $ %d\n", precioPorKmLatam);

				break;
			case 5:
				printf("Ingrese Kilometros: \n");
				scanf("%d", &kilometros);

				printf("Ingrese precio Aerolineas Argentinas: \n");
				scanf("%d", &precioAerolineas);

				printf("Ingrese precio Latam: \n");
				scanf("%d", &precioLatam);

				descuento = precioAerolineas * 10 / 100;
				precioConDebitoAerolineas = precioAerolineas - descuento;

				descuento = precioLatam * 10 / 100;
				precioConDebitoLatam = precioLatam - descuento;

				interes = precioAerolineas * 25 / 100;
				precioConCreditoAerolineas = precioAerolineas + interes;

				interes = precioLatam * 25 / 100;
				precioConCreditoLatam = precioLatam + interes;

				precioBitcoinAerolineas = precioAerolineas / 4606954.55;
				precioBitcoinLatam = precioLatam / 4606954.55;

				precioPorKmAerolineas = precioAerolineas * kilometros;
				precioPorKmLatam = precioLatam * kilometros;

				diferenciaIngresada = precioAerolineas - precioLatam;

				break;
			case 6:
				break;
		}
	}while(opcion != 6);

	printf("Los kilometros ingresados son: %d km \n", kilometros);

	printf("\nPrecio Aerolineas: %d $ \n", precioAerolineas);
	printf("a) Precio con tarjeta de debito: $ %d\n", precioConDebitoAerolineas);
	printf("b) Precio con tarjeta de credito: $ %d\n", precioConCreditoAerolineas);
	printf("c) Precio pagando con bitcoin: %f BTC\n", precioBitcoinAerolineas);
	printf("Mostrar precio unitario: $ %d\n", precioPorKmAerolineas);

	printf("\nPrecio Latam: %d $ \n", precioLatam);
	printf("a) Precio con tarjeta de debito: $ %d\n", precioConDebitoLatam);
	printf("b) Precio con tarjeta de credito: $ %d\n", precioConCreditoLatam);
	printf("c) Precio pagando con bitcoin: %f BTC\n", precioBitcoinLatam);
	printf("Mostrar precio unitario: $ %d\n", precioPorKmLatam);


	return 0;
}
