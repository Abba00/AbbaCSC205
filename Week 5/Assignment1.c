#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *onlineFraud(void *oF)
{
    long *iD_1 = (long *)oF; 
    printf("Online Fraud %ld \n", *iD_1);
}

void* chargeback(void *cB)
{
    long *iD_2 = (long *)cB; 
    printf("Chargeback %ld \n", *iD_2);
}

void* paymentGatewayChallenges(void *pGC)
{
    long *iD_3 = (long *)pGC; 
    printf("Payment Gateway Challenge %ld \n", *iD_3);
}

void* continuousUpdate(void *cU)
{
    long *iD_4 = (long *)cU; 
    printf("Continuous Update %ld \n", *iD_4);
}

void* userExperienceChallenges(void *uEC)
{
    long *iD_5 = (long *)uEC; 
    printf("User Experience Challenges %ld \n", *iD_5);
}

void* multiCurrencyPayment(void *mCP)
{
    long *iD_6 = (long *)mCP; 
    printf("Multi-Currency Payment %ld \n", *iD_6);
}


int main()
{
    int input;
    pthread_t _oF;
    pthread_t _cB;
    pthread_t _pCG;
    pthread_t _cU;
    pthread_t _uEC;
    pthread_t _mCP;

    printf("How many operations would you like to manage : ");
    scanf("%d", input);

    printf("|OPERATION CHALLENGES| \n");
    printf("(1) Online Fraud \n");
    printf("(2) Chargeback \n");
    printf("(3) Payment Gateway Challenges \n");
    printf("(4) Continuous Update \n");
    printf("(5) User Experience Challenges \n");
    printf("(6) Multi-Currency Payment \n\n");
   
    for (int i=0;i<=input;i++)
        int choice;
        printf("Input the number corresponding to the challenge you want to manage");
        
        int a;
        if(choice == 1)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_oF, NULL, onlineFraud, (void *)&_oF);
        pthread_join(_oF, NULL);
        pthread_exit(NULL); 
        }

        else if(choice == 2)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_cB, NULL, chargeback, (void *)&_cB);
        pthread_join(_cB, NULL);
        pthread_exit(NULL); 
        }

        else if(choice == 3)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_pCG, NULL, paymentGatewayChallenges, (void *)&_pCG);
        pthread_join(_pCG, NULL);
        pthread_exit(NULL); 
        }

        else if(choice == 4)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_uEC, NULL, continuousUpdate, (void *)&_cU);
        pthread_join(_cU, NULL);
        pthread_exit(NULL); 
        }

        else if(choice == 5)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_uEC, NULL, userExperienceChallenges, (void *)&_uEC);
        pthread_join(_uEC, NULL);
        pthread_exit(NULL); 
        }

        else if(choice == 6)
        {
            for(a=0;a<a+2;a++)
        pthread_create(&_mCP, NULL, multiCurrencyPayment, (void *)&_mCP);
        pthread_join(_mCP, NULL);
        pthread_exit(NULL); 
        }
    return 0;

}
