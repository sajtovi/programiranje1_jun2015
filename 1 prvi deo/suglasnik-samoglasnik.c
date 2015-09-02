#include <stdio.h>

int main() {
  char niska[50];
  int i;
  int br_samoglasnika = 0;
  int br_suglasnika = 0;
  
  printf("Unesite rec od maksimum 50 karaktera: ");
  // funkcija fgets vrsi unos niske od 50 karaktera sa standardnog ulaza i smesta to sto je procitao u promenljivu niska
  fgets(niska,50,stdin);
  
  for(i = 0; niska[i] != '\0'; i++) {
    // postavljamo pitanje da li je karakter koji smo ucitali slovo
    if(isalpha(niska[i])) {
      if(niska[i] == 'a' || niska[i] == 'e' || niska[i] == 'i' || niska[i] == 'o' || niska[i] == 'u')
	br_samoglasnika++;
      else
	br_suglasnika++;
    }
  }

printf("Broj samoglasnika = %d\nBroj suglasnika = %d\n", br_samoglasnika, br_suglasnika); 

return 0;
}
