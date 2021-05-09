 
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
  
/* Simple but buggy bubble sort */
 // new array produces:
 // [Barack, W, Dicky (missing name), Hill, Bill]
 // [42, 1, 105, 60, 62] ---> the array is not being properly sorted by sort()
void sort(item *a, int n) {
      int i = 0, j = 0;
      int s;

      for (; i < n && s != 0; i++) {
              s = 0;
              for (j = 0; j < n; j++) {
                       if (a[j].key > a[j+1].key) {
                               //item t = a[j];
                               item t;
                               t.data = a[j].data;
                               t.key = a[j].key; 
                               a[j] = a[j+1];
                               a[j+1] = t;
                               s++;
                       }
               }
              n--;
       }
}

/* modified version of sort that is bug free */
 // new array produces:
 // [Barack, W, Dicky (missing name), Hill, Bill]
 // [42, 1, 105, 60, 62] ---> the array is not being properly sorted by sort()
void mod_sort(item *a, int n) {
      int i = 0, j = 0;
      int s;
     /* loop through array of items n times */
      for (; i < n; i++) {
              //s = 0;
              /* loop through array of items n times to check every sub-array's values */
              for (j = 0; j < n; j++) {
                       if (a[j].key > a[j+1].key) {
                               item t = a[j];
                               a[j] = a[j+1];
                               a[j+1] = t;
                       }
               }
              n--;
       }
}

void printArray(item *a, int n){
      int i = 0, j = 0;
      int s;
     for(int i = 0; i < n; ++i) {
          printf(a[i].data);
          printf("\n");
     }
}
   
int main()
{
    //printf("Before Sort: \n");
    //printArray(array, 5);
    //sort(array,5);
    //printf("\n"); 
    //printf("After Sort: \n");
    //printArray(array, 5);
    
    //printf("Before MOD Sort: \n");
    //printArray(array, 5);
    mod_sort(array,5);
    //printf("\n"); 
    //printf("After MOD Sort: \n");
    //printArray(array, 5);
    return(0);
}
