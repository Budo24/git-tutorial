#include <math.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <espl_lib.c>
 int main()
 {
  unsigned int a;
  char *b = NULL;
  int c;
 unsigned int e;
 unsigned int dekade;
 int count = 0;
 unsigned int umgekehrte_zahl;
 unsigned int summe =0;
 int abbruch = 0;
 unsigned int k, m, n;
  
   printf("In diesem kleinem Programm werden die Zahlen in die Woerter umgewandelt\n");
  
  while(abbruch == 0)
  {
     printf("Zahl eingeben und die Ausgabe in Woertern sehen [1] \n");
     printf("Programm beenden [0] \n");
     printf("Ihre Wahl: ");
     scanf("%d", &c);
      
     if (c == 0)
     {
 
       printf("Programm beendet :) :) :=) ");
 
 
 
 
 
       abbruch = 1;
       break;
       }
       else if ( c== 1)
       {
       printf("Geben Sie eine Zahl ein: ");
       scanf("%d", &a);
       printf("Die Darstellung der eingegebenen Zahl in Woertern sieht so aus: ");
       
       //Spezialfall Zero
       
       if(a==0)
       {
       printf("zero\n");
       continue;
       }
       
      
         
       dekade =a;
       
      //Hier berechne ich die Anzahl der Ziffer 
     
       for(;;)
      {
       dekade =dekade/10;
       if (dekade == 0)
       {
       break;
       }
       else
       {
       count++;
       }}  
 
 //HIe  transformiere ich z.B. 123 in 321 und zeige es
  
     n=a;
     for(int i=0;i<count+1;i++)
       {
       e = n % 10;
       umgekehrte_zahl=e;
       
       
     for(int j=0;j<count-i;j++)
     { umgekehrte_zahl = umgekehrte_zahl*10;
     
     }
      summe =summe +umgekehrte_zahl;
      n=n/10;
       }
    
       
       b = num_to_words(summe);
      
       for(int i=0;b[i]!='\0';i++)
       {
       printf("%c", b[i]);
       }
    
       
       summe =0;
       count =0;
       
        if(a%10==0)
       {
       
        k=a%10;
        m=a/10;
           
         for(;;)
         { 
         printf(" zero");
         k=m%10;
         m=m/10;
         if(k!=0)
         {
         break;}
         continue;
         
         }
       
         }
 printf("\n");
       
      
       }
       else
       {
        printf("Bitte geben Sie entweder 1 um eine Zahl einzugeben oder 0 um Programm zu beenden\n");
      
       }
       }
       }
         
