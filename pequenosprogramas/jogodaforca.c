#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char palavrasecreta[] = "palmeiras";
  int chutes = 10;
  char letrachutada[10];
  int res;

  for(int x=0;x<=chutes;x++){

    printf("digite uma letra: \n");
    scanf("%s", &letrachutada[x]);

    for(int i = 0;i<strlen(palavrasecreta);i++){

      for(int z = 0;z<strlen(letrachutada);z++){
        if(palavrasecreta[i] == letrachutada[z]){
         res = 1;
        }
      }

      if(res == 1){
        printf(" %c",palavrasecreta[i]);
        res = 0;
      }
      else{
        printf("_ ");
      }
    }
  }
}
