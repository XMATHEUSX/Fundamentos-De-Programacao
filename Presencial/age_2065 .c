#include <stdio.h>
int main(){
    int birth = 0, now = 0; 
    printf("Informe o ano de nascimento: ");
    scanf(" %d",&birth);
    printf("Informe o ano atual: ");
    scanf(" %d",&now);
    //total = valid_vote+null_vote+blank_vote;
    printf("A idade atual corresponde a: %d anos.\nEm 2065 a pessoa terah: %d anos.\n",now-birth,2065-birth);
}