#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[10];
  srand(time(NULL));
  for(int i=0;i<10;i++){
    arr[i]=rand();
  }
  arr[9]=0;
  for(int i=0;i<10;i++){
    printf("%d\n",arr[i]);
  }
  int arr2[10];
  int *m = arr + 9;
  int *n = arr2;
  for(int i=0;i<10;i++){
    *n = *m;
    m--;
    n++;
  }
  for(int i=0;i<10;i++){
    printf("arr[%d]: %d, arr2[%d]: %d\n",i,arr[i],i,arr2[i]);
  }
  return 0;
}
