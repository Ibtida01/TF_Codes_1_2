#include <iostream>
#include <iomanip>
#include<cstring>
#include<map>

using namespace std;
class frame
{
    int width,length;
public:
    photo()
    {
        width=0;
        length=0;
    }
    photo(int a,int b)
    {
        width=a;
        length=b;
    }
    int getLength() {
        return length;
    }
    int getWidth() {
        return width;
    }
    void setWidth(int x)
    {
        width=x;
    }
    void setLength(int x)
    {
        length=x;
    }
};

class photo
{
    int width,length;
public:
    photo()
    {
        width=0;
        length=0;
    }
    photo(int a,int b)
    {
        width=a;
        length=b;
    }
    int getLength() {
        return length;
    }
    int getWidth() {
        return width;
    }
    frame operator+(int x)
    {
        frame f;
        f.setWidth(this->getWidth()+x);
        f.setLength(this->getLength()+x);
        return f;
    }
};


int main()
{
    photo p(5,8);
    frame f;
    f=p+2;
    cout<<f.getWidth()<<" "<<f.getLength()<<endl;
}
