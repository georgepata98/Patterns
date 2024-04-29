class MyClass
{
public static void main(String[] args)
{
  int num;

  for(int i=1; i<=5; i++)
  {
    num=9;
    for(int j=1; j<=6-i; j++)
    {
      System.out.print(num);
      num=num-2;
    }
    System.out.println();
  }
}
}