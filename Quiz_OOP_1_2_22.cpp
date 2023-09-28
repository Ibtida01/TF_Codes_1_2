#include <iostream>
#include <iomanip>
#include<cstring>
#include<map>
#define SIZE 5
using namespace std;
class Course
{
    string name;
    string courseID;
    float credit;

public:
    Course()
    {
        credit = 0;
    }

    Course(string name, string courseID, float credit)
    {
        this->name = name;
        this->courseID = courseID;
        this->credit = credit;
    }
    string operator[](int memberNo)
    {
       // cout<<"satrted"<<endl;
       if(memberNo==0)
       {
           return name;
       }
       else if(memberNo==1)
       {
           return courseID;
       }
       else if(memberNo==2)
       {
           string ret=to_string(credit);
           return ret;
       }
    }
};

class Student
{
    string name;
    Course*courses;
    int courseCount;
    string id;///////////ADDED

public:
    Student(string name, int numCourses)
    {
        this->name = name;
        courses = new Course[numCourses];
        courseCount = 0;
    }
    Student(string name,string id,int numCourses)
    {
        this->name=name;
        this->id=id;
        courseCount=0;7
        courses=new Course[numCourses];
    }
    void addCourse(Course course)
    {
        courses[courseCount++] = course;
    }
    Course operator[](int courseidx)
    {
        //cout<<"reached here"<<endl;
        if(courseidx<0 || courseidx >= courseCount)
        {
            cout<<"Invalid course"<<endl;
            exit(1);
        }
        //cout<<"reached last"<<endl;
        return courses[courseidx];
    }

};

int main()
{
    Course c1("OOP", "CSE108", 3);
    Course c2("DSA-I", "CSE106", 3);
    Student alex("Alex", "2105182", 5);
    alex.addCourse(c1);
    alex.addCourse(c2);
    cout << alex[0][0] << endl; // print name of the first course
    cout << alex[1][1] << endl; // print courseID of the second course
    cout << alex[0][2] << endl; // print credit of the first course
    //[p] indicates p th course
    return 0;
}
