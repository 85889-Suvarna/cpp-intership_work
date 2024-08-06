#include<iostream>
using namespace std;

class shape{
    public:
     virtual void  input()
    {
        cout<<"\n== shape::input:";

    }
     virtual void calarea()
    {
        cout<<"\n===shape::output:";

    }
};
class rect:public shape{
    int l,b;
    public:
    void input()
    {
        cout<<"inter the l and b:";
        cin>>l>>b;

    }
    void calarea()
    {
        int a= l*b;
        cout<<"the area of the rect ="<<a;

    }

};
class circule: public shape{
    int r;
    public:
    void input()
    {
        cout<<"inter the r:";
        cin>>r;

    }
    void calarea()
    {
        int a=3.14*r*r ;
        cout<<"the area of the circule ="<<a;

    }


};
int main()
{

    shape *sptr= NULL;
    rect r1;
    circule c1;
    int ch;
    do{
        cout<< " 1.rect_area  2.circule_area 0.Exit "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1 //rect_area
            sptr=&r1;

            break;
        case 2://circule_area
            sptr=&c1;
            break;
        }
        if(sptr!=0){ 
            sptr->input();
            sptr->calarea();
        }
        sptr = NULL;

         
        


    }while (ch!=0);
    
        

//shape *sptr= NULL;
//rect r1;
//sptr=&r1;
//sptr->input();
//sptr->calarea();

   /* shape s1;
    s1.input();
    s1.calarea();

    rect r1;
    r1.input();
    r1.calarea();

    circule c1;
    c1.input();
    c1.calarea();*/


    return 0;

}
