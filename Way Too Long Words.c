#include<stdio.h>
#include<string.h>
int main (){
    int n,l,i;
    scanf("%d",&n);
    char word[n][102];
    for ( i =1; i <n; i++)
    {
        scanf("%s",&word[i]);
        l=strlen(word[i]);
        if (l>10)
        {
            printf("%c",word[i][0]);
            printf("%d",l-2);
            printf("%c",word[i][l-1]  );
            
        }
        
    
    else{
        printf("%s\n",word[i]);
    }
    }
return 0;
}
//solve one way