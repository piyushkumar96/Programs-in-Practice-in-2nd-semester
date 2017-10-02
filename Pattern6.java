class Pattern6 {
public static void main (String args[])
{
int i,j,k,l=4,n;
 
	for(i=2;i<=11;i+=2)
	 {	for(k=0;k<l;k++)
		System.out.print(" ");
			l--; 
			n=(int)(i/2);
  		for(j=1;j<i;j++)
    		{ 
     			if(j>=(int)(i/2+1))
     			 {
				n--;
				System.out.print(n);
			 }

			else
				 System.out.print(j);
    		}

 	System.out.println();
 	}

l=0;

	for(i=9;i>=2;i-=2)
 	  {	
		for(k=0;k<=l;k++)
		   System.out.print(" ");
			
             l++; 
	     n=(int)(i/2);

		  for(j=1;j<i-1;j++)
    		   { 
    			 if(j>=(int)(i/2+1))
      			  {
                               n--;
                               System.out.print(n);
                          }

                         else
                               System.out.print(j);
                    }

            System.out.println();
           }
}

}


/*            1
             121
            12321  
           1234321   
          123454321
           1234321
            12321
             123
              1

*/