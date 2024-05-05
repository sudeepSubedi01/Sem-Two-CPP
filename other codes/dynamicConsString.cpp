#include<iostream>
#include<string.h>
using namespace std;

class concatenate{
    private:
        char *str;
    public:
        concatenate(){
            str = new char[1];
            str[0] = '\0';
        }
        concatenate(char *str1){
            str = new char[strlen(str1)+1];
            strcpy(str,str1);            
        }
        void show(){
            cout<<"The string is: "<< str <<endl;
        }
        ~concatenate(){
            delete []str;
        }
};
int main(){
    concatenate c1("hello world");
    c1.show();
    return 0;
}