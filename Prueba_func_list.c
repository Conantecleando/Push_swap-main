#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del nodo de la lista
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

// Función para imprimir la lista en pantalla
void printList(Node* head) 
{
    printf("Lista: ");
    printf("\n");
    while (head != NULL) 
    {
        printf("%d ", head->data);
        printf("\n");
        printf("%d", head->index);
        printf("\n");
        head = head->next;
    }
    printf("\n");
}

// Función principal
int main() {
    // Inicializar la lista vacía
    Node* myList = NULL;

    // Insertar elementos en la lista
    insertAtEnd(&myList, 45);
    insertAtEnd(&myList, 200);
    insertAtEnd(&myList, 3);
    insertAtEnd(&myList, 80);
    insertAtEnd(&myList, 89);
    insertAtEnd(&myList, 1);

    // Imprimir la lista en pantalla
    printList(myList);

    // Liberar la memoria asignada para la lista
    while (myList != NULL) {
        Node* temp = myList;
        myList = myList->next;
        free(temp);
    }

    return 0;
}
