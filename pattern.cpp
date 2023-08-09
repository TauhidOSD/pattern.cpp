#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<< "Enter number of lines :";
    cin>>n;
    for(row =1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<< col+64;//row%2;//col%2;//" * ";//<<row;//<<col;
        }
        cout<< endl;
    }
    getch();
}
