#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("in.txt");
int main()
{
    int x,s=0;
    while(fin>>x)
    {
        s=s+x;
    }
    cout<<s;
    return 0;
}
