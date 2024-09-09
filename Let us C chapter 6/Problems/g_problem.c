/*
When  interest  compounds  q  times  per  year  at  an  annual  rate  of  
r  %  for  n  years,  the  principal  p  compounds  to  an  amount  a  as  per 
the following formula a = p ( 1 + r / q ) nq 
Write  a  program  to  read  10  sets  of  p,  r,  n  &  q  and  calculate  the 
corresponding as. 

*/

#include <stdio.h>
#include <math.h>

int main(){

    double p, r, n, q, a;
    
    for(int i=1; i<=10; i++){
        printf("Set: %d\n",i);
        printf("Principal (p): ");scanf("%lf", &p);
        printf("Annual Interest Rate(r in percent): ");scanf("%lf", &r);
        printf("Number of years(n): ");scanf("%lf", &n);
        printf("Compounding Period(q): ");scanf("%lf", &q);
        printf("------------------------------\n");
        r = r/100;
        a = p * pow((1 + r / q), n * q);
        printf("Total Amount of set %d: %.2lf\n", i, a);
        printf("------------------------------\n");
    }

    return 0;
}