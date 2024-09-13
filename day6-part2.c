#include <stdio.h>

// long long were the problem !!
int main(){
int time=40709879 ;    
   
long long destination= 215105121471005;

int sum=1;


long long winingNumb=0;
for (int holdtime = 0; holdtime < time; holdtime++)
{
  long long speed=holdtime;
   long long remaining=time-speed;

   long long distanceTraveled=speed*remaining;

   if (distanceTraveled>destination)
   {
        winingNumb++;
   }
   
}

    printf(" Answer== %d",winingNumb);



    
}