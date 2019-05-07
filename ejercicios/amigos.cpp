# include <stdio.h>
# include <conio.h>

#define p printf
#define s scanf

void amigos (int k, int l)
  {  
    int sum=0,sum2=0;
    
       p("\n\nDivisoresDe(%d)=(",k);
      for(int i=1;i<k;i++)
        if(k%i==0)
        p("%d ",i,sum+=i);          
      
      p(")\nSumaDivDe(%d)=%d\n",k,sum);
       p("\n\nDivisoresDe(%d)=(",l);
      for(int i=1;i<l;i++)
         if(l%i==0)
         p("%d ",i,sum2+=i);
        
        p(")\nSumaDivDe(%d)=%d",l,sum2);
                
                    
         if(sum==l&&sum2==k)
                p("\n\n\nLos Numeros Son Amigos");
          else
                p("\n\n\nLos Numeros No Son Amigos"); 
    
    }


main()
{
      int n,n1;
      
      p("DIGITE PRIMER NUMERO: ");
      s("%d",&n);
      
      p("\nDIGITE SEGUNDO NUMERO: ");
      s("%d",&n1);
      
      amigos (n,n1);
      
      getch();
      
      }
      
    
                     
                  