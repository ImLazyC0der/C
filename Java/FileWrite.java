
import java.io.File;
import java.io.FileWriter;
import java.io.*;

public class FileWrite{
  public static void main(String args[])
  {
    File file=new File("F:\\Java.txt");
    FileWriter filewriter=null;
    try
    {
      filewriter=new FileWriter(file);
      filewriter.write("training java to VCET Students");
      System.out.println("Done");
    }
    catch(IOException e)
    {
      e.printStackTrace();

    }
    finally
    {
      try{
        filewriter.close();
      }
      catch(IOException e)
      {
        e.printStackTrace();
      }
    }
  }

}