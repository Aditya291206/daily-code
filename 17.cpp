//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class TournamentInfo {
public:
    int numTeams;
    int numMatches;

    void inputTournament() {
        cout << "Enter number of teams: ";
        cin >> numTeams;
        cout << "Enter number of matches: ";
        cin >> numMatches;
    }

    void showTournament() {
        cout << "Teams   : " << numTeams << endl;
        cout << "Matches : " << numMatches << endl;
    }
};

class CricketTournament : public TournamentInfo {
public:
    string winner;

    void inputCricket() {
        cout << "Cricket Tournament"<<endl;
        inputTournament();
        cout << "Enter winner: "<<endl;
        cin >> winner;
    }

    void showCricket() {
        cout << "\nCricket Tournament Details:\n";
        showTournament();
        cout << "Winner  : " << winner << endl;
    }
};

class FootballTournament : public TournamentInfo {
public:
    string winner;

    void inputFootball() {
        cout << "Football Tournament"<<endl;
        inputTournament();
        cout << "Enter winner: "<<endl;
        cin >> winner;
    }

    void showFootball() {
        cout << "Football Tournament Details:"<<endl;
        showTournament();
        cout << "Winner  : " << winner << endl;
    }
};

class HockeyTournament : public TournamentInfo {
public:
    string winner;

    void inputHockey() {
        cout << "Hockey Tournament"<<endl;
        inputTournament();
        cout << "Enter winner: "<<endl;
        cin >> winner;
    }

    void showHockey() {
        cout << "Hockey Tournament Details:"<<endl;
        showTournament();
        cout << "Winner  : " << winner << endl;
    }
};

int main() {
    CricketTournament cricket;
    FootballTournament football;
    HockeyTournament hockey;

    cricket.inputCricket();
    cricket.showCricket();

    football.inputFootball();
    football.showFootball();

    hockey.inputHockey();
    hockey.showHockey();

    return 0;
}
