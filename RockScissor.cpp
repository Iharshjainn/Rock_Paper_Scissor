#include<iostream>
using namespace std;
int main()
{
    int player1,player2;
    cout<<"Enter 1 for Rock"<<endl;
    cout<<"Enter 2 for Scissor"<<endl;
    cout<<"Enter 3 for Paper"<<endl;
    cout<<"Player 1 turn : "<<endl;
    cin>>player1;
    cout<<"Player 2 turn : "<<endl;
    cin>>player2;

    if(player1==player2)
    {
        cout<<"Game Draw"<<endl;
    }
    else if((player1==1 && player2==2) || (player1==2 && player2==3) || (player1==3 && player2==1))
    {
        cout<<"Player 1 wins"<<endl;
    }
    else
    {
        cout<<"Player 2 wins"<<endl;
    }
    return 0;
}