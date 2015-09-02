#include <stdio.h>
#include <ctype.h>

void prebroj(char niska[]);

int main() {
  char niska[50];
  
  printf("Unosite niske od maksimum 50 karaktera: ");

  while(fgets(niska,50,stdin) != NULL)
      prebroj(niska);

return 0;
}

void prebroj(char niska[]) {
  int i;
  int br_samoglasnika = 0;
  int br_suglasnika = 0;
  
  for(i = 0; niska[i] != '\0'; i++) {
    if(isalpha(niska[i])) {
      if(niska[i] == 'a' || niska[i] == 'e' || niska[i] == 'i' || niska[i] == 'o' || niska[i] == 'u')
	br_samoglasnika++;
      else
	br_suglasnika++;
    }
  }  
printf("Broj samoglasnika = %d\nBroj suglasnika = %d\n", br_samoglasnika, br_suglasnika); 
}
