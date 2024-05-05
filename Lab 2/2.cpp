// Create a class named time with data members second, minute, hour, and day. Initialize all the data members 
// using constructors and use necessary member functions to add two times and display the result in main().

#include<iostream>
using namespace std;

class Time{
    private:
        int d,h,m,s;
    public:
        Time(){
            d=h=m=0;

        }
        Time(int day, int hrs, int min, int sec){
            d = day;
            h = hrs;
            m = min;
            s = sec;
        }
        void processData(Time t1, Time t2){
            int dt, ht, mt, st;

            st = t1.s + t2.s;
            s = st % 60;

            mt = t1.m + t2.m + st / 60;
            m = mt % 60;

            ht = t1.h + t2.h + mt / 60;
            h = ht % 24;

            dt = t1.d + t2.d + ht / 24;
            d = dt;
        }
        void displayData(){
            cout<<d<<" Days "<<h<<" Hours "<<m<<" Minutes "<<s<<" Seconds "<<endl;
        }

        
};

int main(){
    Time t1(1,18,40,50);
    Time t2(10, 18, 40, 50);
    Time t3;
    t3.processData(t1,t2);
    
    cout<<"Time 1 = ";
    t1.displayData();
    cout<<"Time 2 = ";
    t2.displayData();
    cout<<"Resultant Time = ";
    t3.displayData();
    return 0;
}