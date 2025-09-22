#include <stdio.h>
#include <string.h>

int main(){
  const char *types[3] = {"time", "length", "temp"};
  const char *time[6] = {"s", "m", "h", "d", "w", "y"};
  const char *length[7]={"mm", "cm", "dm", "m", "km", "i", "ml"};
  const char *temp[3] = {"C", "F", "K"};
  char selector1[10];
  char selector2[10];
  char ui[10];
  for(int i=0; i<2; i++){
    printf("%s", types[i]);
  }
  printf("%s Enter a type of value you want to convert: ");
  scanf("%9s", ui);
  if(strcmp(ui, "time")==0) {
    printf("Here are your options: \n");
    for(int i=0; i<6; i++) {
      printf("%s", time[i]);
    }
    printf("Which do you want to convert? ");
    scanf("%s", &selector1);
    printf("What do you want to convert to? ");
    scanf("%s", &selector2);
  }
  return 0;
}

