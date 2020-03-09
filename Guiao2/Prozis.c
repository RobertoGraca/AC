#include<stdio.h>

#include <math.h>
static unsigned int nIter=0;
static unsigned int n=25;



unsigned long long recursiva (unsigned int n)
{
		unsigned long r=0;
		if(n==0){	
		nIter++;
		return 0;
	
		}	
		else if(n==1){
		nIter++;
		return 1;
			
		}
		else{
		r=3*(recursiva(n-1))+2*(recursiva(n-2));
		nIter++;
		}	
		return r;
	}
		

unsigned long interativa (unsigned int n)
{
	unsigned long i=2,a=0,b=1,c=0;	
	if(n==0){
		nIter++;
		return 0;
	
	}
	else if(n==1){
		nIter++;
		return 1;
		
	}
	else{
		for (i = 2; i <= n; i++){
		c=3*b+2*a;
		a=b;
		b=c;
		nIter++;	
		}
		return c;	
	}
	

}
unsigned long recorrencia (unsigned int n)
{
double left=pow(0.5*(3+sqrt(17)),n);
double right=pow(0.5*(3-sqrt(17)),n);
return (left-right)/sqrt(17);
}

unsigned long exponencial (unsigned int n)
{
	
double c1 = 0.24253562503633297352;
double c2 = 1.27019663313689157536;
return round(c1*exp(c2*n));
}


int main(void){	
	unsigned int i=0;
	unsigned long result=0;
	printf(" rec | ite\t int |  ite\t reco | ite\t exp | ite\n");
	for(;i<n;i++){

		nIter=0;
		result=recursiva(i);
		printf("%20ld\t|%10d\t",result,nIter);
	
		nIter=0;
		result=interativa(i);
		printf("%20ld\t|%10d\t",result,nIter);
		
		nIter=0;
		result=recorrencia(i);
		printf("%20ld\t|%10d\t",result,nIter);
		nIter=0;
		result=exponencial(i);
		printf("%20ld\t|%10d\t",result,nIter);
		puts("");
	}	
		
	return 0;
}