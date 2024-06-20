#include <iostream>

using namespace std;
class NumberList
{
    int numbers[10];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
                          // if count is bigger or equal to 10, the function will return false
    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};
void NumberList::Init()
{
    this->count=0;
}
bool NumberList::Add(int x)
{
    if(count>=10) {return false;}
    else
    {
        this->numbers[count] = x;
        count++;
        return 0;
    }
}
void NumberList::Sort()
{
    for(int i=0; i< count-1; i++)
    {
        for(int j=0; j<count-i-1; j++)
        {
            if(numbers[j]>numbers[j+1]) {swap(numbers[j],numbers[j+1]);}
        }
    }
}
void NumberList::Print()
{
    for(int i=0; i<count; i++)
    {
        cout<<numbers[i]<<" ";
    }
}
int main()
{
    NumberList a;
    a.Init();
    a.Add(3);
    a.Add(5);
    a.Add(8);
    a.Add(6);
    a.Sort();
    a.Print();
    return 0;
}
