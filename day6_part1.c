#include <stdio.h>



int main(){
int time[]={
   40 ,
   70,
   98,
   79    
   
};
int destination[]={
    215,
    1051,
    2147,
    1005   
    };

int sum=1;
int destinationArrSize=sizeof(destination)/sizeof(*destination);

for (int i = 0; i < destinationArrSize; i++)
{
    int currentRaceTime=time[i];
    int currentDestination=destination[i];
 
    int numberOfWins=0;
    for (int j = 0; j < currentRaceTime; j++)
    {
        int speed=j;
        int remainingTime=currentRaceTime-j;

        int myTravelDist=speed*remainingTime;

        if(myTravelDist>currentDestination){
            numberOfWins++;
        }

    }
    sum*=numberOfWins;
    
}
    printf(" Answer == %d",sum);



    
}