
class StringTokenizer {
    String s;
    char delim;
    int tokenCount;
    int currpos;

    StringTokenizer(String s, char delim) {
        this.s = s;
        this.delim = delim;
        tokenCount = 0;
        currpos = 0;
    }
    int countTokens()
    {
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == delim)
                count++;
        }
        return count + 1;
    }
    boolean hasMoreTokens()
    {
        if(currpos < s.length())
            return true;
        //else
            return false;
    }
    String nextToken()
    {
        int i=-1;
        for( i=currpos;i<s.length();i++)
        {
            if(s.charAt(i)==delim)
            {
                break;
            }
        }
        String currentToken=s.substring(currpos,i);
        currpos=i+1;
        return currentToken;
    }
}

public class tf {
    public static void main(String[] args) {
        String s = "This is a test";
        StringTokenizer st = new StringTokenizer(s, ' ');
        System.out.println(st.countTokens());
        while(st.hasMoreTokens())
        {
            System.out.println(st.nextToken());
        }
    }
}
