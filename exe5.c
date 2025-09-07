#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.100

int main(void){
    int i,low_rate,num_years,month,year;
    double value[5] , month_rate;
    printf("taux d'interet : ");
    scanf("%d",&low_rate);
    printf("nombre d'annees : ");
    scanf("%d",&num_years);

    printf("\nAnnees");
    for (i=0;i<NUM_RATES;i++){
        printf("%6d%%",&low_rate+i);
        value[i]=INITIAL_BALANCE;
    }
    printf("\n");
    for(month=1;month<=12;month++){
         printf("&3d    ", year);
    for (i = 0; i < NUM_RATES; i++) {
      value [i] += ((low_rate + i) / 100.0 *value[i])/12;
       printf("%7.2f",value[i]);
    }
      printf("\n" );
    }


    return 0;
}
