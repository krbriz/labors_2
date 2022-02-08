#include<stdio.h>
#include<math.h>
int main(){
float  a, b, precizitate, x, funkca,funkcb;
int k=0;


printf("Ievadi a veertiibu: ");
fflush(stdin);
scanf("%f", &a);

printf("Ievadi b veertiibu: ");
fflush(stdin);
scanf("%f", &b);

printf("Ievadi precizitaates veertiibu: ");
fflush(stdin);
scanf("%f", &precizitate);

funkca = (x+precizitate), funkcb = (x-precizitate);
if(funkca*funkcb>=0){
    printf("Nav pareizas veertiibas");
    return 0;}

x = a;

while ((b-a)>precizitate) {
    k++;
    x = (a+b)/2;
    if(funkca*funkcb<0)   //// MANA FUNKCIJA f(x+δx)·f(x−δx) < 0
    a = x;
    else
    b = x;

    printf("a = %3f, b = %3f\t", a, b);
    printf("precizitate %3f, x = %3f, k = %d\n", precizitate, x, k);
    
}
printf("Sakne atrodas pie x=%.3f peec sekojosha iteraaciju skaita: %d", x, k);
}

