#include <stdio.h>
#define MAX_ARRAY_SIZE 100

int main()
{
    //2
    int size;
    int newNumber, position;
    int i;
    int numArray[MAX_ARRAY_SIZE];

    //3
    printf("Enter size of the array : ");
    scanf("%d", &size);

    //4
    for (i = 0; i < size; i++)
    {
        printf("Enter value for position %d : ", i);
        scanf("%d", &numArray[i]);
    }

    //5
    printf("Enter the number you want to add to this array : ");
    scanf("%d", &newNumber);

    //6
    printf("Enter the position in the array to add this number : ");
    scanf("%d", &position);

    //7
    for (i = size; i >= position - 1; i--)
    {
        numArray[i + 1] = numArray[i];
    }

    //8
    numArray[position - 1] = newNumber;

    //9
    for (i = 0; i < size + 1; i++)
    {
        printf("%d ", numArray[i]);
    }
}