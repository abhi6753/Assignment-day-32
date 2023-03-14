/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of matches and creates an array for number of goals dynamically. */
#include<iostream>
#include<string>
using namespace std;
class Player
{
    int player_no;
    string name;
    int numOfMatches;
    int *numOfGoals ;
    public:
    Player()
    {
        cout<<"Enter Player No.  : ";
        cin>>player_no;
        cout<<"Enter Player Name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter number of Matches : ";
        cin>>numOfMatches;
        numOfGoals = new int[4];
        for(int i=0;i<numOfMatches;i++)
        {
            cout<<"Enter number of Goals in match "<<i+1<<" : ";
            cin>>numOfGoals[i];
        }
    }
    void display()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<"Player No.  : "<<player_no<<endl;
        cout<<"Player Name : "<<name<<endl;
        cout<<"No. of Matches played : "<<numOfMatches<<endl;
        for(int i=0;i<numOfMatches;i++)
          cout<<"Match "<<i+1<<" Goals : "<<numOfGoals[i]<<endl;
    }

};
int main()
{
    Player p;
    p.display();
    return 0;
}