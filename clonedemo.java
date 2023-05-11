
class clonedemo
{
    public static void main(String arg[])
    {
        
        try
        {
            student obj1 =new student(51,23,"amit");
            student obj2 =(student)obj1.clone();

            System.out.println("name: "+obj1.name);
            System.out.println("marks: "+obj1.marks);
            System.out.println("age: "+obj1.age);
            System.out.println();

            System.out.println("name: "+obj2.name);
            System.out.println("marks: "+obj2.marks);
            System.out.println("age: "+obj2.age);
        }
        catch(Exception obj)
        {

        }
    }
}
class student implements Cloneable
{
    public String name;
    public int marks;
    public int age;

    public student(int a,int b,String str)
    {
        this.name = str;
        this.marks = a;
        this.age = b;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }

}