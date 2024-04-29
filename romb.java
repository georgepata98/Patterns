class MyClass
{
public static void main(String args[])
{
  int aux=0;

  for(int i=1; i<=9; i++)
  {
    for(int j=1; j<=9; j++)
    {
      if(i!=5) {
        if(j==5-aux || j==5+aux) System.out.print("*");
        if(j!=5-aux && j!=5+aux) {
          if(j!=5) System.out.print(" ");
        }
        if(i!=1 && i!=9) {
          if(j==5) System.out.print("*");
        }
      }
      if(i==5) System.out.print("*");
    }
    System.out.println();
    if(i<5) aux++;
    else aux--;
  }
}
}