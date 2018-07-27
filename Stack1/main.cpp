#include <iostream>

using namespace std;

int main()
{
    int b=-1;
    int c,a[b],top;
    while(c!=5)
    {
        cout<<"Press 1 for Push"<<endl;
        cout<<"Press 2 for Pop"<<endl;
        cout<<"Press 3 to Display Top"<<endl;
        cout<<"Press 4 to Display the Size"<<endl;
        cout<<"Press 5 to Exit"<<endl;
        cin>>c;

        if(c==1)
        {
            b=b+1;
            cout<<"Enter the Element: "<<endl;
            cin>>a[b];
            top=a[b];
        }

        if (c==2)
        {
            b=b-1;
            top=a[b];
        }

        if (c==3)
        {
            cout<<"Top is: "<<top<<endl;
        }

        if(c==4)
        {
            cout<<"Total Number of Elements: "<<b+1<<endl;
        }
    }
    return 0;
}
