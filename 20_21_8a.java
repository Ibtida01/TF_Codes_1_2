import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
class Fruit implements Comparator<Fruit>
{
    String name;
    int quantity;
    public Fruit(String name,int quantity){
        this.name=name;
        this.quantity=quantity;
    }
    @Override
    public String toString()
    {
        return "Fruit name: "+name+" quantity "+quantity;
    }
    public int compare(Fruit f1,Fruit f2)
    {
        if(f1.quantity!=f2.quantity)
        {
            return -(f1.quantity-f2.quantity);
        }
        else
        {
            return f1.name.compareTo(f2.name);
        }
    }
}
public class TF_20_21_8a {
    public static void main(String[] args) {
        ArrayList<Fruit> fruits = new ArrayList<>();
        fruits.add(new Fruit("Apple", 100));
        fruits.add(new Fruit("Orange",300));
        fruits.add(new Fruit("Banana", 300));
        fruits.add(new Fruit("Mango", 50));
        fruits.add(new Fruit("Grapes", 40));
        Collections.sort(fruits,new Fruit(null,0));
        for (Fruit f : fruits)
            System.out.println(f);
    }
}
