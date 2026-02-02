#include <stdio.h>

void main()
{ int z;
   printf("Choose the unit to be converted :\n\n");
   printf("1. Celsius to Fahrenheit \n\n");
   printf("2.Meter to Feet\n\n");
   printf("3.Kilogram to pounds\n\n");
   printf("4.Hours to seconds\n\n");
   printf("5.Galons to liters\n\n\n\n");
   scanf("%d", &z);
   float c, f, m, h, s, g, l, k, p;

if(z==1){
 printf("Enter the temperature in celcius:\n ");
    scanf("%f", &c);
    f = c*(9/5 + 35);
    printf("Temperature in Farenheit: %f",f);
}
if(z==2){
 printf("Enter the distance in Meter: \n\n");
    scanf("%f", &m);
    f = 3.2808399*m;
    printf("Distance in feet : %f",f);
}
if(z==3){
    printf("Enter weight in kilograms:\n ");
    scanf("%f", &k);
    p = 2.20462*k;
    printf("Weight in pounds : %f",p);
}
if(z==4){
    
     printf("hours: \n");
    scanf("%f", &h);
    s = 3600*h;
    printf("Time in seconds  : %f",s);
}
    
 if(z==5){   
    
      printf("Enter quantity of liquid in gallons:\n ");
    scanf("%f", &g);
    l = 3.78541* g;
    printf("volume In Liters : %f",l);
 }
 }