#include <stdio.h>
int main(){

    int val,time;
    int val0=0;
    printf("Iki adet sayi giriniz :");
    scanf("%d" ,&val);

    printf("-- 0 ile %d sayilari arasindaki Prime sayilar -- \n",val);

    for(int i=0 ; i<=val ; i++){
        time=0;
        for(int j=2 ; j<i ; j++){
            if(i%j == 0){
                time++;
            }
        }

        if(time == 0 && val != 0 && val0 != 1)
            printf("%d\n" ,i);

    }
    return 0;
}
