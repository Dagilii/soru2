#include <stdio.h>
void buykuc(int liste[] ,int len){
    for (int i = 0; i< len - 1; i++)
    {
        int index = i;
        if(i%2==0){
            for (int j = i + 1; j <len; j++)
                if (liste[j] > liste[index])
                    index = j;}
        else{
            for (int j = i + 1; j <len; j++)
                if (liste[j] < liste[index])
                    index = j;}

            
        int smallerNumber = liste[index];
        liste[index] = liste[i];
        liste[i] = smallerNumber;
    }
}

void listyaz(int liste[],int uzunluk)
{
    for (int i=0; i<uzunluk ;i++)
        printf("%d\n",liste[i]);
    
}
void main(){
    int list[] = {60,80,3,9,57,11};
    buykuc(list,6);
    listyaz(list,6);
}