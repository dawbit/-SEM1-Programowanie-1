#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void zamiana(unsigned int n){
    unsigned int maska=2147483648; //2 do 31;
    int jedynki=0, zera=0;
    printf("\nLiczba %u w zapisie binarnym: ", n);
    start:
    if(maska > 0){
        if((n & maska) == 0 ){
            maska = maska >> 1 ;
            goto start;
        	}
        else{
            while(maska>0){
                if((n & maska) == 0 ){
                    printf("0");
                    zera++;
                }
                else{
                    printf("1");
                    jedynki++;
                }
                maska = maska >> 1 ;
            }
        }
    }
    printf("\nJedynki: %d\tZera: %d\n", jedynki, zera);
}

int main(){

    unsigned int liczba;
    printf("Wpisz liczbe: ");
    scanf("%u",&liczba);
    zamiana(liczba);
    return 0;
}
