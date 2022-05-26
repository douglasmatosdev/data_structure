/*
 *   Buscar pelo menor e posiciona-lo no início
 */

#include <stdio.h>

void printVet(int[], int, char[]);
void selection_sort(int[], int);

int main()
{
    int size = 5;
    int x, vet[] = {13, 23, 3, 8, 1};

    system("clear");

    printVet(vet, size, "Before sort");

    selection_sort(vet, size);

    printVet(vet, size, "After sort");

    return 0;
}

void selection_sort(int vet[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Assuming the current index as a minimum
        int min_index = i;

        // Always running an index ahead
        for (int j = i + 1; j < size; j++)
        {
            // Checking if the value of the forward index is less than the value of the smallest index
            if (vet[j] < vet[min_index])
            {
                // If true, the minimum value will become the current index
                min_index = j;
            }
        }

        // Temporarily save the current value
        int temp = vet[i];
        
        // The current value will become the minimum value
        vet[i] = vet[min_index];

        // The minimum value will become the current value
        vet[min_index] = temp;
    }
}

void printVet(int vet[], int size, char message[30])
{
    printf("\n%s:\n", message);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", vet[i]);
    }
    printf("\n");
}
