  #include <stdio.h>
  int main (){
  int row,col,i,j,count=0;
  char a[25][25];
  scanf("%d %d",&row,&col);

  for ( i = 0; i <col; i++)
  {
      scanf("%s",a[i]);
  }

  for ( i = 0; i < col; i++)
  {
     for ( j = 0; i <row; j++)
     {
         if (a[i][j]=='*' )
         {
             if ( a[i+1][j]!='*'&&a[i][j+1]=='*'&&a[i-1][j]!='*'&& a[i][j-1]!=0)
             {
                count++;
             }
             
         }
         
     }
     
  }
  
  printf("%d",count);
  



   return 0;
  }