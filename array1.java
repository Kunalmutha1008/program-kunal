class Array1
{
    public static void main(String arg[])
    {
        //static way           not prefer in programming 
        int Arr1[] = {10,20,30,40};
        
        //Dynamic way
        int Arr2[] = new int[4];
        Arr2[0] = 10;
        Arr2[1] = 20;
        Arr2[2] = 30;
        Arr2[3] = 40;


        System.out.println("length of Arr1 is"+Arr1.length);
        System.out.println("length of Arr2 is"+Arr2.length);
    }
}