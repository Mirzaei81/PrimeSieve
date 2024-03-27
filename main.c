#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define init_size 4

int main(){
		int num;
		scanf("%d",&num);
		num+=1;
		int Primes[num];
		makeArr(Primes,num);
		for(int i=3;i<sqrt((double)num);i++){
			int max=num/i;
			if(!Primes[i]){
				continue;
			}
			for(int j=2;j<=max;j++){
				Primes[i*j] = false;
			}
		}
	for(int i=0;i<num;i++){
		if(Primes[i]){
			printf("%d ",i,Primes[i]?"":"not",Primes);
		}
	}
}

void makeArr(int Primes[],int size){
	for(int i=0;i<size;i++){
		if(i%2){
			Primes[i] =true;
		}
		else{
			Primes[i] =false;
		}
	}
}
