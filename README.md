sequence_n
==========

#include <stdio.h>

#define SHRT_MAX 32767

int main(int argc, char*argv[]){

  short int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
//short loop
//you want to keep on evaluating the fractorial
//you would like to test whether the next number is greater than the limit

  for( shortIndex = 1; shortIndex < 6; shortIndex++){
    //n(n-1)(n-2)...
    for( shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){
        if(shortStorage*(shortCurrentIndex > SHRT_MAX)){
          printf("%d! is the maximum factorial we can calculate \n", shortIndex -1);
          break;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);
        printf("current value for shortIndex = %d\n", shortStorage);
    }
    printf("%d! = %d \n", shortIndex, shortStorage);
  }
  return 0;
}

this was suppose to show the n fractorial result
