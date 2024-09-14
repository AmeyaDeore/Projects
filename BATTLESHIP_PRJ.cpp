#include<iostream>
using namespace std;
int main(){
    cout<<"WELCOME TO THE GAME OF BATTLE SHIP \nYou shall be playing it on a grid of 6 x 6 consisting of 0's and 1's as follows : \n0  0  0  0  0  0\n0  0  0  0  0  0\n0  0  0  0  0  0\n0  0  0  0  0  0\n0  0  0  0  0  0\n0  0  0  0  0  0\n\nYou have to specify the row and column you want to hit ...if you hit all battleship you win now lets begin ^_^ ";
    int x;
    cout<<"Press 5 to start"<<endl;
    cin>>x;
    if(x==5){
        cout<<"Great Lets begin : There are a total of 10 ships on the 6x6 grid ...Make sure you hit them all to win and dont worry you have infinite tries ;)\n";
    }else{cout<<"See you next time"<<endl;}

    bool ships [6][6] = {
        {0,1,0,0,1,0},
        {0,1,0,1,0,0},
        {0,0,0,0,1,0},
        {0,1,0,0,0,1,},
        {1,0,0,1,0,0,},
        {0,0,1,0,0,0,}
    };

    int hits = 0;
    int turns = 0;

    while(hits<10){
        int trow,tcol;

        cout<<"Select the row between 1 - 6"<<endl;
        cin>>trow;

        cout<<"Select the column between 1 - 6"<<endl;
        cin>>tcol;

        int row = trow - 1;
        int col = tcol - 1;

        if(ships[row][col]==1){
            ships[row][col]=0;
            hits++;
            cout<<"You just HIT a ship!!!\nKeep Going "<<endl;
        }else{
            cout<<"Aw its a MISS :( Try again"<<endl;
        }
        turns++;
    }
    cout<<"CONGRATULATIONS YOU HIT ALL THE TARGETS ^_^ It took you a total of "<<turns<<" turns to hit all the targets!\nTry again if you can hit in less turns";
    cout<<"This was the GRID you played on : \n"<<ships[6][6]<<endl;
    return 0;
}