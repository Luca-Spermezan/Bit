#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
    string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

    bool isValid(float grade) const
    {
        return grade>=1.0f && grade<=10.0f;
    }
public:
    Student(string name=" ", float mathGrade = 1.0f, float englishGrade = 1.0f, float historyGrade = 1.0f)
        : name(name), mathGrade(mathGrade), englishGrade(englishGrade), historyGrade(historyGrade){}

    void setName(string newname)
    {
        name = newname;
    }
    string getName()
    {
        return name;
    }
    void setMathGrade(float grade)
    {
        if(isValid(grade))
        {
            mathGrade = grade;
        }
        else cout<<"invalid grade";
    }
    float getMathGrade()
    {
        return mathGrade;
    }
    void setEnglishGrade(float grade)
    {
        if(isValid(grade))
        {
            englishGrade = grade;
        }
        else cout<<"invalid grade";
    }
    float getEnglishGrade()
    {
        return englishGrade;
    }
    void setHistoryGrade(float grade)
    {
        if(isValid(grade))
        {
            historyGrade = grade;
        }
        else cout<<"invalid grade";
    }
    float getHistoryGrade()
    {
        return historyGrade;
    }
    float getAverageGrade()
    {
        return (mathGrade+englishGrade+historyGrade)/3.0f;
    }
    friend int compareName(Student s1, Student s2);
    friend int compareMathGrade(Student s1, Student s2);
    friend int compareEnglishGrade(Student s1, Student s2);
    friend int compareHistoryGrade(Student s1, Student s2);
    friend int compareAvergaeGrade(Student s1, Student s2);
};
int compareName(Student s1, Student s2)
{
    if(s1.name<s2.name) return -1;
    if(s1.name>s2.name) return 1;
    return 0;
}
int compareMathGrade(Student s1, Student s2)
{
    if (s1.mathGrade < s2.mathGrade) return -1;
    if (s1.mathGrade > s2.mathGrade) return 1;
    return 0;
}
int compareEnglishGrade(Student s1, Student s2)
{
    if (s1.englishGrade < s2.englishGrade) return -1;
    if (s1.englishGrade > s2.englishGrade) return 1;
    return 0;
}
int compareHistoryGrade(Student s1, Student s2)
{
    if (s1.historyGrade < s2.historyGrade) return -1;
    if (s1.historyGrade > s2.historyGrade) return 1;
    return 0;
}
int compareAverageGrade(Student s1, Student s2)
{
    float avg1 = s1.getAverageGrade();
    float avg2 = s2.getAverageGrade();
    if(avg1<avg2) return -1;
    if(avg1>avg2) return 1;
    return 0;
}
int main()
{
    Student a("Alice", 3.0f, 4.5f, 8.9f);
    Student b("Nashandra", 3.0f, 4.5f, 8.9f);
    compareName(a,b);

    return 0;
}
