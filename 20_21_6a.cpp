import java.util.ArrayList;

class StringTokenizer {
    String s;
    char delim;
    int tokenCount;
    //int currpos;
    String[] tokens;
    int currentToken;
    StringTokenizer(String s, char delim) {
        this.s = s;
        this.delim = delim;
        tokenCount = 0;
        //currpos = 0;
        currentToken=-1;
        tokenize(s);
    }
    private void tokenize(String s)
    {
       String[] temp=s.split(String.valueOf(delim),-1);
        for(String str:temp)
        {
            if(str.length()>0)
            {
                tokenCount++;
            }
        }
        tokens=new String[tokenCount];
        int i=0;
        for(String str:temp)
        {
            if(str.length()>0)
            {
                tokens[i++]=str;
            }
        }
    }
    int countTokens()
    {
       return tokenCount;
    }
    boolean hasMoreTokens()
    {
        if(currentToken < tokenCount-1)
            return true;
        //else
            return false;
    }
    String nextToken()
    {
        if(currentToken<tokenCount-1)
        {
            return tokens[++currentToken];
        }
        else return null;
    }
}

public class tf {
    public static void main(String[] args) {
        String s = "This is   a    test";
        StringTokenizer st = new StringTokenizer(s, ' ');
        System.out.println(st.countTokens());
        while(st.hasMoreTokens())
        {
            System.out.println(st.nextToken());
        }
    }
}
