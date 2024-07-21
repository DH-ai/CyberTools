#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// using standard eculidian algorithm to find the gcd
long gcd(long a,long b){
	while (b!=0){
		long t=b;
		b=a%b;
		a=t;
	}
	return a;
}

long mod_inverse(long e,long phi){
	long t = 0, newt=1;
	long r = phi, newr=0;

	while ( newr!=0){
		long q = r/newr;
		long temp = t;
		t = newt;
		newt = temp - q * newt;
		temp = r;
		r = newr;
		newr = temp-q * newr;
	}
	if (r>1) return -1;
	if (t<0) t+=phi;
	return phi;
}


void generate_keypair(p, q, &e, &d, &n){
	*n = p*q;
	long phi = (p-1)*(q-1);

	*e=3;

	while (gcd(*e,phi)!=1){
		(*e)++;
	}
	*d = mod_inverse(*e,phi);
}

char* encrypt(long e, long n, const char *message){
	long *cipher = (long*)malloc(strlen(message)*sizeof(long));
	for (int i = 0; message[i] !='\0'; i++){
		cipher[i]=mod_exp(message[i],e,n);
	}
	return cipher;

}




int main(){
	long p=61,q=53;
	long e,d,n;


	FILE* flptr; // our message charachter pointer 

	char msg[80];
	flptr = fopen("./msg.txt","r");

	if (flptr==NULL){
		printf( "Error Occurred while reading the message");
		exit(1);
	}

	fgets(str,80,flptr);
	
	fclose(flptr);	


	generate_keypair(p,q,&e,&d,&n);
	
	printf( "Public key   : (%ld, %ld)\n",e,n);
	printf( "Private Key  : (%lf, %ld)\n",d,n);


	const char *message=str;
	printf("Orignal Message: %s\n",message);
	

	long *encrypted_msg = encrypt(e, n, message);
	return 0;
}
