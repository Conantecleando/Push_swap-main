#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

// Definición de la estructura del nodo de la lista
enum test
{
    CORRECTO,
    INCORRECTO
};
/// @brief 
typedef struct Node {
    int data;           // Datos del nodo
    int index;          // Indice de la lista
    struct Node* prev;  //Puntero al anterior
    struct Node* next;  // Puntero al siguiente nodo
} List;

// Función para crear un nuevo nodo con un valor dado
List* createNode(int value) {
    static int i = -1;
    List* newNode = (List*)malloc(sizeof(List));
    if (newNode == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el nodo.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->index= ++i;
    newNode->next = NULL;
    return newNode;
}
void	new_index(List **stack)
{
	List	*temp;
	int		i;

	if (!*stack)
		return ;
	temp = *stack;
	i = -1;
	while (temp)
	{
		temp->index = ++i;
		temp = temp->next;
	}
	return ;
}
void	minus_index_list(List **stack)
{
	List	*temp;

	temp = *stack;
	while (temp)
	{
		temp->index = (temp)->index--;
		temp = temp->next;
	}
	return ;
}

// Función para insertar un nodo al final de la lista
void insertAtEnd(List* head, int value) {
    List* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
    } else {
        List* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int	find_max_value(List *stack)
{
	List	*temp;
	int		max_value;

	max_value = INT_MIN;
	temp = stack;
	while (temp)
	{
		if (temp->data > max_value)
			max_value = temp->data;
		temp = temp->next;
	}
	return ((max_value));
}

int	find_index_max_value(List *a, int max)
{
	List	*temp;
	int		index;

	temp = a;
	while (temp)
	{
		if (temp->data == max)
		{
			index = temp->index;
			break ;
		}
		temp = temp->next;
	}
	return ((index));
}
void	reverse_rotate_stack(List **stack)
{
	List	*last;
	List	*temp;

	last = *stack;
	temp = NULL;
	while (last->next)
	{
		temp = last;
		last = last->next;
	}
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}
bool	list_ok(List *stack)
{
	List	*temp;

	temp = stack;
	while (temp->next != NULL)
	{
		if ((temp->data) < (temp->next->data))
			temp = temp->next;
		else
			return (false);
	}
	return (true);
}
// Función para imprimir la lista en pantalla
void printList(List* head) 
{
    printf("Lista: ");
    printf("\n");
    while (head != NULL) 
    {
        printf("%d ", head->data);
        printf("\n");
        //printf("%d", head->index);
        //printf("\n");
        head = head->next;
    }
    printf("\n");
}
bool	double_number_error(List *stack_a)
{
	List	*temp;
	List	*equal;

	temp = stack_a;
	while (temp)
	{
		equal = temp->next;
		while (equal)
		{
			if (temp->data == equal->data)
				return (false);
			equal = equal->next;
		}
		temp = temp->next;
	}
	return (true);
}
// Función principal
int main() {
    // Inicializar la lista vacía
	List	*myList;
    int max = 0;
	int index = 0;

	myList = NULL;
    // Insertar elementos en la lista
    insertAtEnd(myList, 45);
    insertAtEnd(myList, 20125854);
    insertAtEnd(myList, 3);
    insertAtEnd(myList, 80);
    insertAtEnd(myList, -89);
    insertAtEnd(myList, 1);
    max = find_max_value(myList);
	index = find_index_max_value(myList, max);
	printf("%d", myList->index);
	if (double_number_error(myList))
		return (0);
	// Imprimir la lista en pantalla
    printList(myList);
    printf ("%d", max);
	printf ("\n");
	printf ("%d", index);
	printf ("\n");

	reverse_rotate_stack(&myList);
	//minus_index_list(&myList);
	//new_index(&myList);
	printf("ahora la lista al reves");
	printList(myList);
    printf ("%d", max);
	printf ("\n");
	while(myList != NULL)
	{	
		printf ("%d", myList->index);
		myList = myList->next;
	}
	printf ("\n");

    // Liberar la memoria asignada para la lista
    while (myList != NULL) {
        List* temp = myList;
        myList = myList->next;
        free(temp);
    }

    return 0;
}
