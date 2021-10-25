package udpserver;
import java.io.*;
import java.net.*;
public class udpserver{
   public static void main(String args[])throws Exception
   { 
     BuffuredReader inFromUser=new BufferedReader(new InputStreamReader(System.in));
     DatagramSocket serverSocket=new DatagramSocket();
     byte[]receiveData=new byte[1024];
     byte[]sendData=newbyte[1024];
     InetAddress adress=InetAddress.getLocalHost();
     System.out.println("Server is ready");
     String sentence=inFromUser.readLine();
     sendData=sentence.getBytes();
     DatagramPacket sendPacket=new DatagramPacket(sendData,sendData.length,address,9876);
     serverSocket.send(sendPacket);
   }
}
