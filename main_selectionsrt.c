/* 
 * File:   main.c
 * Author: vignesh
 * Comments: Selection Sort Demo Program
 * Created on 16 December 2009, 17:09
 */

#include <stdio.h>
#include <time.h>

//---------------------Selection Sort-------------------------------------------


typedef enum _BOOL {false=0, true} BOOL;

void selection(int a[], int N){
    
    int i, j, min, t;
    for(i=0; i<N; i++){
        min = i;
        for(j = i+1; j<=N; j++)
            if(a[j] < a[min]) min = j;
            t = a[min]; a[min] = a[i]; a[i] = t;
    }
    
    return;
    
}


int main ()
{
  int t;
  int a[10] = {2,6,7,1,9};
  
  selection(a, 10);
  for (t=1; t<10; t++)
    printf("%d\t", a[t]);

  return 0;
}
    


