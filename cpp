#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(void){
    srand(time(NULL));
    int listan[6];
    int pos,aux;
    for(int i = 0;i < 6;i++){
        listan[i] = 1+ rand()%(10);
        if(i>0){
            for(int j = 0;j < i;j++){
                if(listan[i]==listan[j]){
                    i--;
                    break;
                }
                
            }
        }
    }
    for(int i = 0;i < 6;i++){
        pos = i;
        aux = listan[i];
        while((pos>0)&&(listan[pos-1]>aux)){
            listan[pos] = listan[pos-1];
            pos--;
        }
        listan[pos] = aux;
    }
    for(int i = 0;i< 6;i++){
        cout<<listan[i]<<" ";
    }
    system("pause");
    return 0;
}
