
import java.io.File;
import java.io.FileWriter;
import java.io.*;

public class FileRead{
  public static void main(String args[])
  {
    File file=new File("F:\\Java.txt");
    FileReader fileReader=null;
    try
    {
      fileReader=new FileReader(file);
      char a[]=new char[100];
      fileReader.read(a);
      
      for(char i:a)
        System.out.print(i);
    }
    catch(IOException e)
    {
      e.printStackTrace();

    }
    finally
    {
      try{
        fileReader.close();
      }
      catch(IOException e)
      {
        e.printStackTrace();
      }
    }
  }

}