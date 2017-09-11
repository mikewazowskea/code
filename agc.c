#include <stdio.h>
#define agc 5

int value=0;

void Decrease(int value, int minus){

  for(int i=0;i<minus;i++)
	value--;	 
}
void Increase(int value, int plus){
  
  for (int i=0;i<plus;i++)
	value++;
}
int  main(){

    int arr[]={10,3,4,2,6,7,1,0,8,5,9};
    int i;
    int res=0;
    for(i=0;i<11;i++){
      if(arr[i]>agc){
	res = arr[i]-agc;
        Decrease(arr[i],res);
	printf("array[%d] previous value: %d Decresed value: %d current value(agc): %d\n",i,arr[i],res,arr[i]-res);
	res=0;
      }
      else if(arr[i]<agc){
	res = agc-arr[i];
        Increase(arr[i],res);
	printf("array[%d] previous value: %d Incresed value: %d current value(agc): %d\n",i,arr[i],res,arr[i]+res);
        res=0;
      }
      else 
        printf("array[%d] value is agc value..,so value was not change\n",i);
        
    }
  
}
