class MyPattern
{
public static void main(String args[])
{
  int aux=0;
  char[] charArray = new char[9];  //char array de dimensiune 9
  charArray[0]='H'; charArray[1]='e'; charArray[2]='l';
  charArray[3]='l'; charArray[4]='o'; charArray[5]='J';
  charArray[6]='a'; charArray[7]='v'; charArray[8]='a';

  for(int i=1; i<=17; i++)
  {
    if(i<=9) {
      for(int j=1; j<=18; j++)
      {
        if(j<=i) System.out.print(charArray[j-1]);
        if(j>=19-i) System.out.print(charArray[18-j]);
        if(j>i && j<19-i) System.out.print(' ');
      }
    }
    else {
      for(int j=1; j<=18; j++)
      {
        if(j<=8-aux) System.out.print(charArray[j-1]);
        if(j>=11+aux) System.out.print(charArray[18-j]);
        if(j>8-aux && j<11+aux) System.out.print(' ');
      }
      aux++;
    }
    System.out.println();
  }
}
}
