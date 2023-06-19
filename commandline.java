class commandline
{
    public static void main(String arg[])
    {
        System.out.println("demonstration of command line");
        int no1 = Integer.parseInt(arg[0]);
        int no2 = Integer.parseInt(arg[1]);

        int ans = no1+no2;
        
        System.out.println("number of command line argument :"+arg.length);
        System.out.println("addition is: "+ans);
    }
}

//javac commandline.java
//java commandline.java 11 21