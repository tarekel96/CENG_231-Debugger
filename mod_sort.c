 
#include <stdio.h>

typedef struct {
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
 
void sort(item *a, int n) { 
      int i = 0, j = 0;

      for (i = 0; i < n - 1; i++) {
              for (j = 0; j < n - i - 1; j++) {
                       if (a[j].key > a[j+1].key) {
                               item t = a[j];
                               a[j] = a[j+1];
                               a[j+1] = t;
                       }
               }
       }
}

void printArray(item *a, int n){
     int i = 0;
     for(i = 0; i < n; ++i) {
          printf(a[i].data);
          printf(" ~ %i\n", a[i].key);
     }
}
   
int main()
{
    printf("Before Sort: \n");
    printArray(array, 5);
    sort(array,5);
    printf("\n"); 
    printf("After Sort: \n");
    printArray(array, 5);

    return(0);
}
