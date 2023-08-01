#include <stdio.h>
#define MAX_ARRAY_SIZE 100

int main()
{
    int size;
    int newNumber, position;
    int i;
    int numArray[MAX_ARRAY_SIZE];

    printf("Enter size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter value for position %d : ", i);
        scanf("%d", &numArray[i]);
    }

    printf("Enter the number you want to add to this array : ");
    scanf("%d", &newNumber);

    printf("Enter the position in the array to add this number : ");
    scanf("%d", &position);

    for (i = size; i >= position - 1; i--)
    {
        numArray[i + 1] = numArray[i];
    }

    numArray[position - 1] = newNumber;

    for (i = 0; i < size + 1; i++)
    {
        printf("%d ", numArray[i]);
    }
}
