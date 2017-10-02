class Star {
public static void main (String args[])
{
int i,j,k=0,h,l,y,m=0,b=21; 

	for(i=20;i>=0;i-=2)
 	  { 
   		for(h=0;h<m;h++)
		  System.out.print(" ");
	      m++; 
              if(i<=12)
                 {   for(j=0;j<=i;j++)
                       System.out.print("*");
                 }
	   
             System.out.print(" ");
	
              if((i<=20)&&(i>12))
                {    for(y=0;y<b;y++)
	                 System.out.print(" ");
                }  
	     b-=2; 
 			 for(l=0;l<=k;l++)
    			    {     System.out.print("*");
   			    }
			k+=2;

	     System.out.print(" ");
  
                 if(i<=12)
                   {    for(j=0;j<=i;j++)
                           System.out.print("*");
                   }
	      System.out.println();
 
           }

     m=10;    k=20;     b=1;

 	for(i=0;i<=20;i+=2)
 	  {	
  		 for(h=0;h<m;h++)
		   System.out.print(" ");
		    m--; 
		if(i<=12)
                 {	 for(j=0;j<=i;j++)
      			    System.out.print("*");
                 }
	      System.out.print(" ");
		
		if((i<=20)&&(i>12))
         	  {    for(y=0;y<b;y++)
		       System.out.print(" ");
		  }  
                  b+=2; 
  		
		for(l=0;l<=k;l++)
    		    System.out.print("*");
		k-=2;
  
	       System.out.print(" ");
	
		if(i<=12)
		    {    for(j=0;j<=i;j++)
                              System.out.print("*");
                    }
 	        System.out.println();
 	     }

}

}


/*      
	      
                      *
	             *** 
                    *****
          ******** ******* *******
           ****** ********* *****
             *** *********** ***
              * ************* *
	      * ************* *
             *** *********** ***
            ***** ********* *****
           ******* ******* *******
                    ***** 
                     ***
                      *
*/