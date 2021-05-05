# Code-Edit
Программа по редактированию кода
____

## Пример ввода:

```c
    #include <stdio.h>
int col (int n, int y, int x){
  /*Hello
  I am a recursive function*/
  if ( n/10 == 0){
    return n;}else{
return n%10 + col (n/10,a,b);
  }for ( ; ; )//An endless circle
  {
    y = sum(x, 5);}
}
int SuMMa(int x, int z)
{
  int y;
  y=x+z;
  return(y);
}
int main ()
{
  int p;
  int i,j,k = 0;
char zebu;
char pekatka /*Wait for scanf*/;
  scanf("%c", zebu);//It does not work
  scanf("%c", &pekatka);
  //
  printf("%c",'zebu');
  printf("%c",'pekatka');
  //
  /*tgkfecigbvtun2c]  -[r,DS CL,Dsnuybth,owmcjbnkzd.*/
int a = 15; int b = a;
int z = 0; int n;
scanf("%d", &n);/*Here
  call a recursive function,
  but I do not remember,
  what does it do*/
  printf("%d\n",col(n,a,b));
  z = col(n);
           for /*a circle in a circle in a circle*/(i = 0; i <= a; i++){
  for(j = 20; j>= b - 10; j--){
  while(k < 10){
  k++;}
}
  }
  printf("%d",k)/*An endless circle*/;
  do
  {
    printf("%c",'*');
  }
    while (1);
  k = 0/*An endless circle*/;
for ( int i = 0; i<= k ; i--) { i ++; }
               a = 15;
  b = 4;
  /*Call
                    second
function*/
 int sum = SuMMa(a,b);
  printf("%d", p+3)/*Uninitialized p*/;
int num;
scanf("%d", &num); int rec = num+2;
return 0;
}
```

____
## Пример вывода:

```c
#include <stdio.h>
int col( int n, int y, int x ){
	// Hello 
//	I am a recursive function 
		return n;
	}
	else{
		return n % 10 + col( n / 10, a, b );
	}
	for(;;) // An endless circle{
		y = sum( x, 5 );
	}
}
int SuMMa( int x, int z ){
	int y;
	y = x + z;
	return( y );
}
int main( ){
	int p;
	int i, j, k = 0;
	char zebu;
	char pekatka ;// Wait for scanf 
	scanf("%c", zebu );
	// It does not work 
	scanf("%c", &pekatka );
	// 
	printf("%c", ' zebu ' );
	printf("%c", ' pekatka ' );
	// 
	int a = 15;// tgkfecigbvtun2c ] - [ r, DS CL, Dsnuybth, owmcjbnkzd . 
	int b = a;
	int z = 0;
	int n;
	scanf("%d", &n );
	// Here 
//	call a recursive function, but I do not remember, what does it do 
	z = col( n );
	for ( i = 0; i <= a; i ++ ){// a circle in a circle in a circle 
		for( j = 20; j >= b - 10; j -- ){
			while( k < 10 ){
				k ++;
			}
		}
	}
	printf("%d", k ) ;// An endless circle 
	do{
		printf("%c", ' * ' );
	}
	while( 1 );
	k = 0 ;// An endless circle 
	for( int i = 0; i <= k; i -- ){
		i ++;
	}
	a = 15;
	b = 4;
	// Call 
//	second 
//	function 
	printf("%d", p + 3 ) ;// Uninitialized p 
	int num;
	scanf("%d", &num );
	int rec = num + 2;
	return 0;
}
max_cycles = 2

The function "col" does not call other functions
This function is recursive


The function "SuMMa" does not call other functions
This function is not recursive
```
---
