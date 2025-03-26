#include <stdio.h>

int main(void) {
  char modo;

  printf("> Digite o modo que deseja:\nA para lavar, \nB para Enxaguar e Secar, \nC para Lavar, enxaguar e secar \nF para encerrar:\n");
  modo = getchar();
  getchar();

  int Lavar = 0;
  int Enxaguar_Secar = 0;
  int Lavar_Enxaguar_Secar = 0;

  while( modo != 'F' ) {
    switch (modo) {
      case 'A':
	Lavar++;
	printf ("Lavando.\n ");
	break;
      case 'B': 
	Enxaguar_Secar++;
	printf ("Enxaguando e Secando.\n");
	break;
      case 'C':
	Lavar_Enxaguar_Secar++;
	printf ("Lavando, Enxaguando e Secando.\n ");
	break;
    }
    printf("> Digite o modo que deseja:\nA para lavar, \nB para Enxaguar e Secar, \nC para Lavar, enxaguar e secar \nF para encerrar:\n");
    modo = getchar();
    getchar();
  }
  printf("A: %d B: %d C: %d", Lavar, Enxaguar_Secar, Lavar_Enxaguar_Secar);
  return 0;
}