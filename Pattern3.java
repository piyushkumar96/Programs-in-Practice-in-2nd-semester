class Pattern3 {
public static void main (String args[])
{
int i,j,k,l=10;
 for(i=0;i<=20;i+=2)
 {	for(k=0;k<l;k++)
	System.out.print(" ");
	l--; 
  for(j=0;j<=i;j++)
    {  System.out.print("*");
    }

 System.out.println();
 }
}

}


/*            *
             ***
            *****  
           *******
          *********
	 ***********
        *************
	      

*/