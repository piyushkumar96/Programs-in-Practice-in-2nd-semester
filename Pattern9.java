class Pattern9 {
public static void main (String args[])
{
int i,j,k=0,h,l,m=0; 
for(i=20;i>=0;i-=2)
 { 
   for(h=0;h<m;h++)
	System.out.print(" ");
	m++; 	
  for(j=0;j<=i;j++)
    {  System.out.print("*");
    }
System.out.print(" ");
  for(l=0;l<=k;l++)
    {  System.out.print("*");
    }
k+=2;
System.out.print(" ");
    for(j=0;j<=i;j++)
    {  System.out.print("*");
    }

 System.out.println();
 }
l=12;
 for(i=20;i>=0;i-=2)
 {	for(k=0;k<l;k++)
	System.out.print(" ");
	l++; 
  for(j=0;j<=i;j++)
    {  System.out.print("*");
    }

 System.out.println();
 }
}

}


/*      
	
       ************** * *************
        ************ *** ***********
         ********** ***** *********
          ******** ******* *******
           ****** ********* *****
             *** *********** ***
              * ************* *
	        *************
                 ***********
                  *********
                   *******
                    *****
                     ***
                      *
*/