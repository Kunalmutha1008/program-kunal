
class generic2
{
    public static <T> void Display(T Arr[])
    {
        
        for(T no : Arr)           //foreach
        {
            System.out.println(no);
        }
        /*
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }*/

    }
    public static void main(String arg[])
    {
        Integer A[] = {10,20,30,40};
        Float B[] = {50.2f,60.5f,70.5f};
        Double C[] = {23.12,214.123,123.12};

        Display(A);
        Display(B);
        Display(C);
    }
}