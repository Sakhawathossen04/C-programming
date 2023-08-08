#include<stdio.h>
int main(){

      int lowercase_vowel,upercase_vowel;
      char c;
     lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
     upercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

      printf("enter your alphabet:\n");
      scanf("%c",&c);
       
       

      if (lowercase_vowel|| upercase_vowel )
      {
        printf("%c is a vowel",c);
      }
      
   else
  {
    printf("%c is not a vowel",c);
  }
  



    return 0;

}