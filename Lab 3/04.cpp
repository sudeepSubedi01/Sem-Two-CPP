//Binary Operator Overloading: WAP to add two times by overloading binary + operator where 
//sec, min, hour, and day are data members of class ‘Time’

#include<iostream>
using namespace std;

class Time{
    int sec, min, hr, day;
    public:
        Time(){
            sec = min = hr = day = 0;
        }
        Time(int s, int m, int h, int d){
            sec = s;
            min = m;
            hr = h;
            day = d;
        }
        void displayData(){
            cout<<day<<" days "<<hr<<" hour "<<min<<" min "<<sec<<" seconds";
        }
        Time operator + (Time t){
            Time temp;
            int st, mt, ht, dt;

            st = sec + t.sec;
            temp.sec = st % 60;

            mt = min + t.min + st / 60;
            temp.min = mt % 60;

            ht = hr + t.hr + mt / 60;
            temp.hr = ht % 24;

            dt = day + t.day + ht / 24;
            temp.day = dt;

            return temp;
        }
};

int main(){
    Time t1(50,40,18,1), t2(50,40,18,10) , t3;
    t3 = t1 + t2; //t3 = t1 + t2.operator();
    cout<<"The sum of times is: "<<endl;
    t3.displayData();
    return 0;
}