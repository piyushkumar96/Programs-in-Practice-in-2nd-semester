class Pattern5 {
public static void main (String args[])
{
int i,j,k,l=-1,n=9;
 for(i=19;i>=0;i-=2)
 {
  for(j=0;j<=i;j++)
    {  System.out.print("*");
       if((i<20)&&(i>0))
         {   if(j==n)
             {
               	for(k=0;k<=l;k++)
	    	System.out.print(" ");
             }
         }
    }
  l+=2;
  n--;
  System.out.println();
 }


n=1;l=15;
 
for(i=4;i<=20;i+=2)
 {
  for(j=0;j<i;j++)
    {  System.out.print("*");
       if((i<22)&&(i>=4))
         {   if(j==n)
             {	for(k=0;k<=l;k++)
	    	System.out.print(" ");
             }
         }
    }
  l-=2;
  n++;
  System.out.println();
 }

}
}

/*          ******************
            ********  ********
            *******    *******
            ******      ******
            *****        *****
            ****          ****
            ***            ***
            **              **
            *                *
            **              **
            ***            ***
            ****          ****
            *****        *****
            ******      ******
            *******    *******
            ********  ********
            ******************
            
*/