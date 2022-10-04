import java.util.*;

class ArrayList1
{
  public static void main(String args[])
  {
    ArrayList al=new ArrayList<>();
    al.add(10);
    al.add(20);
    al.add("Dinga");
    al.add(56.66);
    al.add('a');
        al.add(1,24);
        al.set(2,45);
    ArrayList al2=new ArrayList<>();
    al2.add(22);
    al.add("Dingi");
    al.addAll(al2);

    System.out.println(al);

    System.out.println(al.size());

    System.out.println(al.get(2));
    System.out.println(al.contains("Dinga"));
    System.out.println(al.remove(4));
    System.out.println(al.isEmpty());
    System.out.println(al);
System.out.println("====================");
    for(int i=0;i<al.size();i++)
    {
      System.out.println(al.get(i));
    }
    al.clear();
  }
}