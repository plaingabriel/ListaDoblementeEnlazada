//============================================================================
// Estudiante    : Gabriel Prado
// C.I           : 28702070
//============================================================================

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char const* argv[])
{
	int opc, n = 0;

	LinkedList list;

	// MENU

	do
	{
		int pos;
		printf("\nEscriba el numero de una de las siguientes opciones:\n");

		printf("1 - Agregar persona\n");
		printf("2 - Buscar persona\n");
		printf("3 - Modificar persona\n");
		printf("4 - Borrar persona\n");
		printf("5 - Mostrar lista de personas\n");
		printf("6 - Salir del programa\n");

		cin >> opc;

		switch (opc)
		{
			// Add and sort
		case 1:
			list.addPerson();
			if (n > 0)
				list.sortList();
			n++;
			break;
			// Search
		case 2:
			if (list.valList() == 1)
			{
				list.searchMenu();
			}
			break;
			// Modify
		case 3:
			if (list.valList() == 1)
			{
				pos = list.valPos(n);
				list.modifyPerson(pos);

				if (n > 1)
					list.sortList();
			}
			break;
			// Remove
		case 4:
			if (list.valList() == 1)
			{
				pos = list.valPos(n);
				list.removePerson(pos);
				n--;
			}
			break;
			// Show
		case 5:
			if (list.valList() == 1)
				list.showList();
			break;
			// Exit
		case 6:
			printf("Cerrando el programa...\n");
			break;
			// Error
		default:
			printf("La opcion seleccionada es invalida. Intente de nuevo\n");
			break;
		}
	} while (opc != 6);

	// END OF MENU

	return 0;
}
