#include<iostream>
using namespace std;
 
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    cout<<"\n Enter the size of STACK[MAX=100]:");
    cin>>n;
    cout<<"\n\t STACK OPERATIONS USING ARRAY";
    cout<<"\n\t--------------------------------";
    cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT";
    do
    {
        cout<<"\n Enter the Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
using namespace std;
void insert()
{if(top=n-1)
cout<<"stack overflow";
else 
cout<<"enter value to be pushed";
cin>>x;
top++;
stack[top]=x;
}
void pop()
{if(top==-1)
cout<<"stack empty";
else 
top--;
cout<<"popped element is"<<x;


}
void display()
{if(top>=0)
cout<<"the element in the stack"<<endl;
for(i=top;i>=0;i--)
{cout<<a[i];
cout<<"next choice"<<endl;
}
else 
cout<<\n"stack is empty";

}

}
}
