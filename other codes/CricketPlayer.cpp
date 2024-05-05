#include<iostream>
using namespace std;

class CricketPlayer{
    public:
    CricketPlayer(){
        cout<<"Class CricketPlayer constructor called" <<endl;
    }
    ~CricketPlayer(){
        cout<<"Class CricketPlayer destructor called" <<endl;
    }
};

class Batter:virtual public CricketPlayer{
    public:
    Batter(){
        cout<<"Class Batter constructor called" <<endl;
    }
    ~Batter(){
        cout<<"Class Batter destructor called" <<endl;
    }
};
class Bowler:virtual public CricketPlayer{
    public:
    Bowler(){
        cout<<"Class Bowler constructor called" <<endl;
    }
    ~Bowler(){
        cout<<"Class Bowler destructor called" <<endl;
    }
};

class AllRounder:public Batter,public Bowler{
    public:
    AllRounder(){
        cout<<"Class AllRounder constructor called" <<endl;
    }
    ~AllRounder(){
        cout<<"Class AllRounder destructor called" <<endl;
    }
};

int main(){
    AllRounder obj;
    return 0;
}