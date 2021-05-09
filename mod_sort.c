
#include <stdio.h>

typedef struct
{
     char *data;
     int key;
} item;

item array[] = {
    {"Bill", 62},
    {"Hill", 60},
    {"Barcak", 42},
    {"Dicky", 105},
    {"W.", 1},
};

void sort(item *a, int n)
{
     int i = 0, j = 0;
     /* first for loop iterates through the array of items */
     for (i = 0; i < n - 1; i++)
     {    /* iterates until n - 1 because we are always looking at 2 elements at a time */
          /* 2nd for loop iterates through items to check values with a conditional then swaps when appropriate */
          for (j = 0; j < n - i - 1; j++)
          { /* iterates until n - i - 1 times because the elements before are already sorted */
               if (a[j].key > a[j + 1].key)
               {
                    item t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
               }
          }
     }
}

void printArray(item *a, int n)
{
     int i = 0;
     for (i = 0; i < n; ++i)
     {
          printf(a[i].data);
          printf(" ~ %i\n", a[i].key);
     }
}

int main()
{
     printf("Before Sort: \n");
     printArray(array, 5);
     sort(array, 5);
     printf("\n");
     printf("After Sort: \n");
     printArray(array, 5);

     return (0);
}
