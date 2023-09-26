class SwapHelperClass
{
    public int x;
}
public class SwappingInJava {
    static void swap1(int x,int y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    static void swap2(Integer x,Integer y)
    {
        Integer temp=x;
        x=y;
        y=temp;
    }
    static void swap3(int[] x,int[] y)
    {
        int temp=x[0];
        x[0]=y[0];
        y[0]=temp; 
    }
 
    static void swap(SwapHelperClass a, SwapHelperClass b)
    {
        int temp=a.x;
        a.x=b.x;
        b.x=temp;
    }
    public static void main(String[] args) {
        int x=10,y=20;
        System.out.println("Before swap1: x="+x+" y="+y);
        swap1(x,y);
        System.out.println("After  swap1: x="+x+" y="+y);
        System.out.println("Unsuccessful swap!");
        System.out.println();
        Integer x1=10,y1=20;
        System.out.println("Before swap2: x1="+x1+" y1="+y1);
        swap2(x1,y1);
        System.out.println("After  swap2: x1="+x1+" y1="+y1);
        System.out.println("Unsuccessful swap!");
        System.out.println();
        int[] x2={10},y2={20};
        System.out.println("Before swap3: x2="+x2[0]+" y2="+y2[0]);
        swap3(x2,y2);
        System.out.println("After  swap3: x2="+x2[0]+" y2="+y2[0]);
        System.out.println("Successful swap!");
        System.out.println();
        SwapHelperClass a=new SwapHelperClass();
        SwapHelperClass b=new SwapHelperClass();
        a.x=10;
        b.x=20;
        System.out.println("Before swap: a.x="+a.x+" b.x="+b.x);
        swap(a,b);
        System.out.println("After  swap: a.x="+a.x+" b.x="+b.x);
        System.out.println("Successful swap!");
    }
}
