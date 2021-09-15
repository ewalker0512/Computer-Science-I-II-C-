#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector <int> playerScoreSheets(vector <int> pVec, vector <int> cVec, int playerScore, int computerScore){ //Function freezes my program.
    pVec.push_back(playerScore);
    cVec.push_back(computerScore);
}

int main(){
srand(time(0));


string playerOne;
cout << "Welcome to Going to Boston!" << endl;
cout << endl;
cout << "Please enter your player name: ";
cin >> playerOne;
cout << endl;

vector <int> playerTotals;
vector <int> computerTotals;
int roundCount = 0;
int playerWinCount = 0;
int computerWinCount = 0;
int pd1 = rand() % 6 + 1;
int pd2 = rand () % 6 + 1;
int pd3 = rand () % 6 + 1;
int playerTotal = pd1 + pd2 + pd3;
cout << playerOne << " rolled a " << pd1 << ", " << pd2 << ", " << "and " << pd3 << endl;
int cd1 = rand () % 6 + 1;
int cd2 = rand () % 6 + 1;
int cd3 = rand () % 6 + 1;
int computerTotal = cd1 + cd2 + cd3;
cout << "The computer rolled a " << cd1 << ", " << cd2 << ", " << "and " << cd3 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
        cout << playerOne << " wins!" << endl;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    //playerScoreSheets(playerTotals,computerTotals, playerTotal, computerTotal);
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd4 = rand() % 6 + 1;
int pd5 = rand () % 6 + 1;
int pd6 = rand () % 6 + 1;
playerTotal = pd4 + pd5 + pd6;
cout << playerOne << " rolled a " << pd4 << ", " << pd5 << ", " << "and " << pd6 << endl;
int cd4 = rand () % 6 + 1;
int cd5 = rand () % 6 + 1;
int cd6 = rand () % 6 + 1;
computerTotal = cd4 + cd5 + cd6;
cout << "The computer rolled a " << cd4 << ", " << cd5 << ", " << "and " << cd6 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win total is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd7 = rand() % 6 + 1;
int pd8 = rand () % 6 + 1;
int pd9 = rand () % 6 + 1;
playerTotal = pd7 + pd8 + pd9;
cout << playerOne << " rolled a " << pd7 << ", " << pd8 << ", " << "and " << pd9 << endl;
int cd7 = rand () % 6 + 1;
int cd8 = rand () % 6 + 1;
int cd9 = rand () % 6 + 1;
computerTotal = cd7 + cd8 + cd9;
cout << "The computer rolled a " << cd7 << ", " << cd8 << ", " << "and " << cd9 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win total is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd10 = rand() % 6 + 1;
int pd11 = rand () % 6 + 1;
int pd12 = rand () % 6 + 1;
playerTotal = pd10 + pd11 + pd12;
cout << playerOne << " rolled a " << pd10 << ", " << pd11 << ", " << "and " << pd12 << endl;
int cd10 = rand () % 6 + 1;
int cd11 = rand () % 6 + 1;
int cd12 = rand () % 6 + 1;
computerTotal = cd10 + cd11 + cd12;
cout << "The computer rolled a " << cd10 << ", " << cd11 << ", " << "and " << cd12 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win total is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd13 = rand() % 6 + 1;
int pd14 = rand () % 6 + 1;
int pd15 = rand () % 6 + 1;
playerTotal = pd13 + pd14 + pd15;
cout << playerOne << " rolled a " << pd13 << ", " << pd14 << ", " << "and " << pd15 << endl;
int cd13 = rand () % 6 + 1;
int cd14 = rand () % 6 + 1;
int cd15 = rand () % 6 + 1;
computerTotal = cd13 + cd14 + cd15;
cout << "The computer rolled a " << cd13 << ", " << cd14 << ", " << "and " << cd15 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win total is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;
cout << "Round " << roundCount << ": " << endl;
cout << playerOne << "'s win total is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd16 = rand() % 6 + 1;
int pd17 = rand () % 6 + 1;
int pd18 = rand () % 6 + 1;
playerTotal = pd16 + pd17 + pd18;
cout << playerOne << " rolled a " << pd16 << ", " << pd17 << ", " << "and " << pd18<< endl;
int cd16 = rand () % 6 + 1;
int cd17 = rand () % 6 + 1;
int cd18 = rand () % 6 + 1;
computerTotal = cd16+ cd17 + cd18;
cout << "The computer rolled a " << cd16 << ", " << cd17 << ", " << "and " << cd18 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd19 = rand() % 6 + 1;
int pd20 = rand () % 6 + 1;
int pd21 = rand () % 6 + 1;
playerTotal = pd19 + pd20 + pd21;
cout << playerOne << " rolled a" << pd19 << ", " << pd20 << ", " << "and " << pd21 << endl;
int cd19 = rand () % 6 + 1;
int cd20 = rand () % 6 + 1;
int cd21 = rand () % 6 + 1;
computerTotal = cd19 + cd20 + cd21;
cout << "The computer rolled a " << cd19 << ", " << cd20 << ", " << "and " << cd21<< endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd22 = rand() % 6 + 1;
int pd23 = rand () % 6 + 1;
int pd24 = rand () % 6 + 1;
playerTotal = pd22 + pd23 + pd24;
cout << playerOne << " rolled a " << pd22 << ", " << pd23 << ", " << "and " << pd24 << endl;
int cd22 = rand () % 6 + 1;
int cd23 = rand () % 6 + 1;
int cd24 = rand () % 6 + 1;
computerTotal = cd22 + cd23 + cd24;
cout << "The computer rolled a " << cd22 << ", " << cd23 << ", " << "and " << cd24<< endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd25 = rand() % 6 + 1;
int pd26 = rand () % 6 + 1;
int pd27 = rand () % 6 + 1;
playerTotal = pd25 + pd26 + pd27;
cout << playerOne << " rolled a " << pd25 << ", " << pd26 << ", " << "and " << pd27 << endl;
int cd25 = rand () % 6 + 1;
int cd26 = rand () % 6 + 1;
int cd27 = rand () % 6 + 1;
computerTotal = cd25 + cd26 + cd27;
cout << "The computer rolled a " << cd25 << ", " << cd26 << ", " << "and " << cd27 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

int pd28 = rand() % 6 + 1;
int pd29 = rand () % 6 + 1;
int pd30 = rand () % 6 + 1;
playerTotal = pd28 + pd29 + pd30;
cout << playerOne << " rolled a " << pd28 << ", " << pd29 << ", " << "and " << pd30 << endl;
int cd28 = rand () % 6 + 1;
int cd29 = rand () % 6 + 1;
int cd30 = rand () % 6 + 1;
computerTotal = cd28 + cd29 + cd30;
cout << "The computer rolled a " << cd28 << ", " << cd29 << ", " << "and " << cd30 << endl;
    if(playerTotal > computerTotal){
        playerWinCount++;
        roundCount++;
    }
    if(playerTotal == computerTotal){
        cout << "Tie" << endl;
        roundCount++;
    }
    if(computerTotal > playerTotal){
        computerWinCount++;
        roundCount++;
        cout << "The computer wins!" << endl;
    }
    computerTotals.push_back(computerTotal);
    playerTotals.push_back(playerTotal);
cout << endl;
cout << "Round " << roundCount << ": ";
cout << playerOne << "'s win count is " << playerWinCount << " and the computer's win count is " << computerWinCount << endl;
cout << endl;

cout << playerOne << "'s totals are: ";
    for(int n : playerTotals){
        cout << n << " ";
    }
cout << endl;
cout << "The computer's totals are: ";
    for(int n : computerTotals){
        cout << n << " ";
    }
cout << endl;
cout << endl;

    if(playerWinCount > computerWinCount){
        cout << playerOne << " wins with " << playerWinCount << " points!" << endl;
    }
    if(computerWinCount > playerWinCount){
        cout << "The computer wins with " << computerWinCount << " points!" << endl;
    }
return 0;
}
