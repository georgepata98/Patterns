class MyClass
{
public static void main(String args[])
{
  int aux1=0, aux2=0;

  for(int i=1; i<=13; i++) 
  {
  if(aux1<=2) {
    for(int j=1; j<=19; j++)
    {
  	  if(j>=3-aux1 && j<=17+aux1) {
    	  if(j>7+aux1 && j<13-aux1) System.out.print(" ");
    	  else System.out.print("o");
 		  }
  	  else System.out.print(" ");
    }
    System.out.println();
    aux1++;
  }
  if(aux1>2) {
    for(int j=1; j<=19; j++)
    {
      if(j>=1+aux2 && j<=19-aux2) System.out.print("o");
      else System.out.print(" ");
    }
    System.out.println();
    aux2++;
  }
  }
}
}