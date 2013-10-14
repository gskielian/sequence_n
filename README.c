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
    for(shortCurrentIndex = shortIndex; shortCurrentIndex != 1; shortCurrentIndex--){ 
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
  test_long();
  return 0;
}

int test_int(){

  int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
  
  for( shortIndex = 1; shortIndex < INT_MAX; shortIndex++){
    shortStorage = 1;

    for(shortCurrentIndex = shortIndex; shortCurrentIndex !=1; shortCurrentIndex--){
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

  long int longIndex = 1, longStorage = 1;
  
    for( longIndex = 1; longIndex < LONG_MAX; longIndex++){
      longStorage = 1;

	if( longStorage > LONG_MAX/longIndex){
	  printf("%ld! is the maximum factorial we can calculate \n", longIndex -1);
	  break;
	}
	//(cumulative product) * (n-1)
	longStorage = longStorage * (longIndex);
    
    	printf("%ld! = %ld \n", longIndex, longStorage); 
  }
  return 0;
}


int test_longlong(){

  long long int shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;

    for( shortCurrentIndex = 1; shortCurrentIndex <= LLONG_MAX; shortCurrentIndex++){
	if( shortStorage > LLONG_MAX/shortCurrentIndex){
	  printf("%lld! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
	  break;
	}
	//(cumulative product) * (n-1)
	shortStorage = shortStorage * (shortCurrentIndex);
    
        printf("%lld! = %lld \n", shortCurrentIndex, shortStorage); 
     }
  return 0;
}


int test_float(){

  float shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;

    for( shortCurrentIndex = 1; shortCurrentIndex <= FLT_MAX; shortCurrentIndex++){
	if( shortStorage > FLT_MAX/shortCurrentIndex){
	  printf("%f! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
	  break;	
	}
	//(cumulative product) * (n-1)
	shortStorage = shortStorage * (shortCurrentIndex);
    
        printf("%f! = %f \n", shortCurrentIndex, shortStorage); 
     }
 
  return 0;
}


int test_double(){

  double shortCurrentIndex = 1, shortIndex = 1, shortStorage = 1;
    shortStorage = 1;

    for( shortCurrentIndex = 1; shortCurrentIndex <= DBL_MAX; shortCurrentIndex++){
	if( shortStorage > DBL_MAX/shortCurrentIndex){
	  printf("%f! is the maximum factorial we can calculate \n", shortCurrentIndex -1);
	  break;
	}
	//(cumulative product) * (n-1)
	shortStorage = shortStorage * (shortCurrentIndex);
    
        printf("%f! = %f \n", shortCurrentIndex, shortStorage); 
     }
 
  return 0;
}
