#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 40

typedef struct
{

    int size;
    int *array;

} array;

array create_array(int size);
void free_array(array *a);
int array_size(array *a);
int *array_at(array *a, int index);
void array_inflate(array *a, int more_size);
void print_array(array *a, int cnt);

int main()
{

    int size = 1;
    array a = create_array(size);
    /*printf("size=%d\n", array_size( &a ));

    *(array_at(&a, 0)) = 10;

    printf("%d position is %d", 0, *(array_at(&a, 0)));
    */
    int number = 0;
    int cnt = 0;

    while (1)
    {        
        scanf("%d", &number); 
        if (number == -1) break;                

        *(array_at(&a, cnt)) = number;
        cnt++;
       
    }
    
    //printf("%d\n", cnt);

    print_array(&a, cnt);

    free_array(&a);

    return 0;
}

array create_array(int size)
{

    array a;
    a.size = size;
    a.array = (int *)malloc(a.size * sizeof(int));

    return a;
}

void free_array(array *a)
{

    free(a->array);
    a->array = NULL;
    a->size = 0;
}


int array_size(array *a)
{
    return a->size;
}


int *array_at(array *a, int index)
{
    if (index >= a->size)
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);

    return &(a->array[index]);
}

void array_inflate(array *a, int more_size)
{

    int *p = (int *)malloc(sizeof(int) * (a->size + more_size));

    for (int i = 0; i < a->size; i++)
        p[i] = a->array[i];

    free(a->array);
    
    a->array = p;
    a->size += more_size;
}

void print_array(array *a, int cnt)
{

    for (int i = 0; i < cnt; i++)

        printf("%d ", a->array[i]);
}