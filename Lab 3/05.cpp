//Binary Operator Overloading: WAP to concatenate two strings by overloading the binary - operator.

#include<iostream>
#include<string.h>
using namespace std;

class Join{
    private:
        char str[50];
    public:
        void getData(){
            cout<<"Enter a string:";
            cin>> str;
        }
        void displayData(){
            cout<< str <<endl;
        }

        Join operator - (Join s)
        {
            Join temp;
            strcpy(temp.str, str);
            strcat(temp.str , " ");
            strcat(temp.str, s.str);
            return temp;
            
        }
};

int main(){
    Join s1, s2, s3;
    s1.getData();
    s2.getData();
    s3 = s1 - s2;
    s3.displayData();
    return 0;
}