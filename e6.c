/*
Algorithme qui lit deux notes et leur coeffients et affiche leur moyenne
variable a,ca,b,cb,m:entier
dedut 
    ecrire("Entrer une note:");
    lire(a);
    ecrire("Entrer son coeffient:");
    lire(ca);
    ecrire("Entrer une autre note:");
    lire(b);
    ecrire("Entrer son coeffient:");
    lire(cb);
    m<-((a*ca)+(b*cb))/(ca+cb)
    afficher("La moyenne de ces deux notes est",m);
fin
*/

//programme C

#include<stdio.h>

int main()
{
    int a,ca,b,cb,m;
    printf("Entrer une note:");
    scanf("%d",&a);
    printf("Entrer son coeffient:");
    scanf("%d",&ca);
    printf("Entrer une autre note:");
    scanf("%d",&b);
    printf("Entrer son coeffient:");
    scanf("%d",&cb);
    m=((a*ca)+(b*cb))/(ca+cb);
    printf("La moyenne de ces deux notes est %d",m);
    return (0);
}
