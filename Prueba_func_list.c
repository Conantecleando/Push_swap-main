#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
} Node;

// Función para crear un nuevo nodo con un valor dado
Node* createNode(int value) {
    static int i = -1;
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el nodo.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->index= ++i;
    newNode->next = NULL;
    return newNode;
}
void	new_index(Node **stack)
{
	Node	*temp;
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
void	minus_index_list(Node **stack)
{
	Node	*temp;

	temp = *stack;
	while (temp)
	{
		temp->index = (temp)->index--;
		temp = temp->next;
	}
	return ;
}

// Función para insertar un nodo al final de la lista
void insertAtEnd(Node** head, int value) {
    Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int	find_max_value(Node **stack)
{
	Node	*temp;
	int		max_value;

	max_value = INT_MIN;
	temp = *stack;
	while (temp)
	{
		if (temp->data > max_value)
			max_value = temp->data;
		temp = temp->next;
	}
	return ((max_value));
}

int	find_index_max_value(Node **a, int max)
{
	Node	*temp;
	int		index;

	temp = *a;
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
void	reverse_rotate_stack(Node **stack)
{
	Node	*last;
	Node	*temp;

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
// Función para imprimir la lista en pantalla
void printList(Node* head) 
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

// Función principal
int main() {
    // Inicializar la lista vacía
	Node	*myList = NULL;
    int max = 0;
	int index = 0;

    // Insertar elementos en la lista
    insertAtEnd(&myList, 45);
    insertAtEnd(&myList, 20125854);
    insertAtEnd(&myList, 3);
    insertAtEnd(&myList, 80);
    insertAtEnd(&myList, -89);
    insertAtEnd(&myList, 1);
    max = find_max_value(&myList);
	index = find_index_max_value(&myList, max);
	//printf("%d", myList->index == )

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
        Node* temp = myList;
        myList = myList->next;
        free(temp);
    }

    return 0;
}
