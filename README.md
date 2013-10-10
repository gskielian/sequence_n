sequence_n
==========

#include <stdio.h> 
#include <limits.h>
#include <float.h>

int main(int argc, char*argv[]){

  short int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
//short loop
//you want to keep on evaluating the fractorial
//you would like to test whether the next number is greater than the limit

  for( shortIndex = 1; shortIndex < SHRT_MAX; shortIndex++){
    //n(n-1)(n-2)...
    shortStorage = 1;

    for( shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){
        if(shortStorage*(shortCurrentIndex) > SHRT_MAX){
          printf("%d! is the maximum factorial we can calculate \n", shortIndex -1);
          goto section2;
        }
        //(cumulative product) * (n-1)
-- VISUAL LINE --                                             1,1           Top
 
int test_double(){ 
 
  double shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1; 
    shortStorage = 1; 
 
    for( shortCurrentIndex = 1; shortCurrentIndex <= DBL_MAX; shortCurrentIndex++){ 
        if( shortStorage > DBL_MAX/shortCurrentIndex){ 
          printf("%f! is the maximum factorial we can calculate \n", shortCurrentIndex -1); 
          goto section7; 
        } 
        //(cumulative product) * (n-1) 
        shortStorage = shortStorage * (shortCurrentIndex); 
     
        printf("%f! = %f \n", shortCurrentIndex, shortStorage);  
     } 
  
  section7: 
  return 0; 
} 

-- VISUAL LINE --                                             138,0-1       Bot
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char*argv[]){

  short int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
//short loop
//you want to keep on evaluating the fractorial
//you would like to test whether the next number is greater than the limit

  for( shortIndex = 1; shortIndex < SHRT_MAX; shortIndex++){
    //n(n-1)(n-2)...
    shortStorage = 1;

    for( shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){
        if(shortStorage*(shortCurrentIndex) > SHRT_MAX){
          printf("%d! is the maximum factorial we can calculate \n", shortIndex -1);
          goto section2;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);
    }
    printf("%d! = %d \n", shortIndex, shortStorage);
  }
  section2:
  test_int();
  test_long();
  test_longlong();
  test_float();
  test_double();
  return 0;
}

int test_int(){

  long int next_val;
  int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
  for( shortIndex = 1; shortIndex < INT_MAX; shortIndex++){
    shortStorage = 1;

    for( shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){
        if( shortStorage > INT_MAX/shortCurrentIndex){
          printf("%d! is the maximum factorial we can calculate \n", shortIndex -1);
          goto section3;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);
    }
    printf("%d! = %d \n", shortIndex, shortStorage);
  }
  section3:
  return 0;
}

int test_long(){

  long int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
  for( shortIndex = 1; shortIndex < LONG_MAX; shortIndex++){
    shortStorage = 1;

    for( shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){
        if( shortStorage > LONG_MAX/shortCurrentIndex){          printf("%ld! is the maximum factorial we can calculate \n", shortIndex -1);
          goto section4;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);
    }
    printf("%ld! = %ld \n", shortIndex, shortStorage);
  }
  section4:
  return 0;
}


int test_longlong(){

  long long int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;
    for( shortCurrentIndex = 1; shortCurrentIndex <= LLONG_MAX; shortCurrentIndex++){
        if( shortStorage > LLONG_MAX/shortCurrentIndex){          printf("%lld! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
          goto section5;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);

        printf("%lld! = %lld \n", shortCurrentIndex, shortStorage);
     }

  section5:
  return 0;
}


int test_float(){

  float shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;
    for( shortCurrentIndex = 1; shortCurrentIndex <= FLT_MAX; shortCurrentIndex++){
        if( shortStorage > FLT_MAX/shortCurrentIndex){          printf("%f! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
          goto section6;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);

        printf("%f! = %f \n", shortCurrentIndex, shortStorage);
     }

  section6:
  return 0;
}


int test_double(){

  double shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;
    for( shortCurrentIndex = 1; shortCurrentIndex <= DBL_MAX; shortCurrentIndex++){
        if( shortStorage > DBL_MAX/shortCurrentIndex){          printf("%f! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
          goto section7;
        }
        //(cumulative product) * (n-1)
        shortStorage = shortStorage * (shortCurrentIndex);

        printf("%f! = %f \n", shortCurrentIndex, shortStorage);
     }

  section7:
  return 0;
}
