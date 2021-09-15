#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
// Problem 1 (1 hour, 44 minutes)
srand(time(0));
cout << "Player 1 Roll!" << endl;
int totalOne = 0;
int p1d1 = rand() % 6 + 1;
    if (p1d1 % 2 == 0){
        totalOne += p1d1;
    }
    if(p1d1 % 2 != 0){
        totalOne -= p1d1;
    }
int p1d2 = rand() % 6 + 1;
    if (p1d2 % 2 == 0){
        totalOne += p1d2;
    }
    if(p1d2 % 2 != 0){
        totalOne -= p1d2;
    }
int p1d3 = rand() % 6 + 1;
    if(p1d3 % 2 == 0){
        totalOne += p1d3;
    }
    if(p1d3 % 2 != 0){
        totalOne -= p1d3;
    }
int p1d4 = rand() % 6 + 1;
    if(p1d4 % 2 == 0){
        totalOne += p1d4;
    }
    if(p1d4 % 2 != 0){
        totalOne -= p1d4;
    }
int p1d5 = rand() % 6 + 1;
    if(p1d5 % 2 == 0){
        totalOne += p1d5;
    }
    if(p1d5 % 2 != 0){
        totalOne -= p1d5;
    }
int p1d6 = rand() % 6 + 1;
    if(p1d6 % 2 == 0){
        totalOne += p1d6;
    }
    if(p1d6 % 2 != 0){
        totalOne -= p1d6;
    }
cout << "Player 1 rolls are: " << p1d1 << ", " << p1d2 << ", " << p1d3 << ", " << p1d4 << ", " << p1d5 << ", " << p1d6 << endl;
cout << "Player 1 finishing total is: " << totalOne << endl;
cout << endl;
cout << "Player 2 roll!" << endl;
int totalTwo = 0;
int p2d1 = rand() % 6 + 1;
    if(p2d1 % 2 == 0){
        totalTwo += p2d1;
    }
    if(p2d1 % 2 != 0){
        totalTwo -= p2d1;
    }
int p2d2 = rand() % 6 + 1;
    if(p2d2 % 2 == 0){
        totalTwo += p2d2;
    }
    if(p2d2 % 2 != 0){
        totalTwo -= p2d2;
    }
int p2d3 = rand() % 6 + 1;
    if(p2d3 % 2 == 0){
        totalTwo += p2d3;
    }
    if(p2d3 % 2 != 0){
        totalTwo -= p2d3;
    }
int p2d4 = rand() % 6 + 1;
    if(p2d4 % 2 == 0){
        totalTwo += p2d4;
    }
    if(p2d4 % 2 != 0){
        totalTwo -= p2d4;
    }
int p2d5 = rand() % 6 + 1;
    if(p2d5 % 2 == 0){
        totalTwo += p2d5;
    }
    if(p2d5 % 2 != 0){
        totalTwo -= p2d5;
    }
int p2d6 = rand() % 6 + 1;
    if(p2d6 % 2 == 0){
        totalTwo += p2d6;
    }
    if(p2d6% 2 != 0){
        totalTwo -= p2d6;
    }
cout << "Player 2 rolls are: " << p2d1 << ", " << p2d2 << ", " << p2d3 << ", " << p2d4 << ", " << p2d5 << ", " << p2d6 << endl;
cout << "Player 2 finishing total is: " << totalTwo << endl;
cout << endl;
if(totalOne > totalTwo) {
    cout << "Player 1 wins!" << endl;
}
if(totalTwo > totalOne) {
    cout << "Player 2 wins!" << endl;
}
if(totalOne == totalTwo){
    cout << "There was a tie, try again!" << endl;
}
cout << endl;

//Problem 2 (Start time 1 hour, 1 minute)
int pot = 20;
int p1roll = 0;
int p1rollcount = 0;
int p1total = 0;
int p2roll = 0;
int p2rollcount = 0;
int p2total = 0;

while(pot >= 0){
    for(int i = 0; i <= 3; i++){ //For loop rolling 3 dice to assign p1 and p2 roll totals per round
        p1roll += rand() % 6 + 1;
        p2roll += rand() % 6 + 1;
    }
    if(p1roll > p2roll){ //Logic for assigning points to a winning player 1
        pot -= 2;
        p1total += 2;
        cout << "Player 1 wins 2 points!" << endl;
    }
    if(p1roll < p2roll){ //Logic for assigning points to a winning player 2
        pot -= 2;
        p2total += 2;
        cout << "Player 2 wins 2 points!" << endl;
    }
    if(p1roll == p2roll){ //Logic for a tie.
        cout << "It's a draw, players reroll." << endl;
    }
p1rollcount++; //incrementing each player's rolls per turn
p2rollcount++;
}
cout << endl;
cout << "Player 1 had " << p1rollcount << " roll attempts." << endl;
cout << "Player 2 had " << p2rollcount << " roll attempts." << endl;
cout << endl;
if(p1total > p2total){ //Logic for a player 1 winning outcome
    cout << "Player 1 wins with " << p1total << " points!" << endl;
}
if(p1total < p2total) { //Logic for a player 2 winning outcome
    cout << "Player 2 wins with " << p2total << " points!" << endl;
}
cout << endl;

//Problem 3 (1 hour, 26 minutes)
int pawt = 21;
int player1points = 5;
int player2points = 5;
int player1roll = 0;
int player2roll = 0;

while(player1points > 0 || player2points > 0){
    for(int i = 1; i <= 2; i++){
        player1roll += rand() % 6 + 1;
        player2roll += rand() % 6 + 1;
            if(player1roll == 7){
                pawt -= 7;
                player1points += 7;
            }
            if(player1roll != 7) {
                player1points -= player1roll - 7;
                pawt += player1roll -7;
            }
            if(player2roll == 7) {
                pawt -= 7;
                player2points += 7;
            }
            if(player2roll != 7){
                player2points -= player2roll - 7;
                pawt += player2roll -7;
            }
    }
    if(player1points <= 0){
        cout << "Player 2 wins!" << endl;
    }
    if(player2points <= 0){
        cout << "Player 1 wins!" <<endl;
    }
}
return 0;
}
