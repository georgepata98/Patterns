import java.io.*;
import java.lang.Thread;

public class merry_christmas
{
  public static void main(String[] args)
  {
    String RESET = "\u001B[0m";
    String GREEN = "\u001B[32m";
    String BROWN = "\u001B[38;5;52m";
    String BLUE = "\u001B[34m";
    String YELLOW = "\u001B[33m";
    String RED = "\u001B[31m";

    try
    {
      for(int i=0; i<50; i++)
      { System.out.println(); }

      for(int k=0; k<2; k++)
      {
        System.out.println(YELLOW + "       2026" + RESET);

        for(int i=0; i<10; i++)
        {
          for(int j=0; j<20; j++)
          {
            if(j>=9-i && j<= 9+i)
            {
              if((i==2 && j==8) || (i==3 && j==11) || (i==5 && j==4) || (i==5 && j==8) || (i==6 && j==11) || (i==7 && j==7) || (i==7 && j==14) || (i==8 && j==3) || (i==8 && j==9) || (i==9 && j==5) || (i==9 && j==16)) { System.out.print(RED + "o" + RESET); }

              else { System.out.print(GREEN + "*" + RESET); }
            }
            if(j<9-i || j>9+i) { System.out.print(" "); }
          }
          System.out.println();
        }

        for(int i=0; i<3; i++)
        {
          for(int j=0; j<11; j++)
          {
            if(j<8) { System.out.print(" "); }
            if(j==8 || j==10) { System.out.print(BROWN + "H" + RESET); }
            if(j==9) { System.out.print(BROWN + "M" + RESET); }
          }
          System.out.println();
        }

        if(k==0)
        {
          System.out.println();
          System.out.println(BLUE + "  MERRY" + RED + " CHRISTMAS !" + RESET);
          System.out.println(BLUE + " AND HAPPY NEW YEAR," + YELLOW + " 2026" + RESET);
        }

        if(k==1)
        {
          System.out.println();
          System.out.println(RED + "  MERRY" + BLUE + " CHRISTMAS !" + RESET);
          System.out.println(RED + " AND HAPPY NEW YEAR," + YELLOW + " 2026" + RESET);
        }

        if(k<1)
        {
          Thread.sleep(3000);  // sleep for 3000 milliseconds

          for(int i=0; i<50; i++)
          { System.out.println(); }  // pe post de clear screen
        }
      }
    }
    catch(InterruptedException e)
    {
      System.out.println("got interrupted!");
    }
  }
}
