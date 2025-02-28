#include <iostream>
using namespace std;

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

short ReadRoundNumbers(string message)
{
    short rounds;
    do
    {
        cout << message << " (1 to 10): ";
        cin >> rounds;
    } while (rounds < 1 || rounds > 10);
    return rounds;
}

enum enWinner
{
    Computer = 1,
    Player = 2,
    Draw = 3
};

enum enChoice
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

string ChoiceToString(enChoice choice)
{
    switch (choice)
    {
    case Stone:
        return "Stone";
    case Paper:
        return "Paper";
    case Scissors:
        return "Scissors";
    default:
        return "Unknown";
    }
}

string WinnerToString(enWinner winner)
{
    switch (winner)
    {
    case Computer:
        return "Computer";
    case Player:
        return "Player";
    case Draw:
        return "Draw";
    default:
        return "Unknown";
    }
}

enChoice PlayerChoose()
{
    short choice;
    do
    {
        cout << "Enter Your choice (1: Stone, 2: Paper, 3: Scissors): ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return (enChoice)choice;
}

enChoice ComputerChoose()
{
    return (enChoice)RandomNumber(1, 3);
}

enWinner Winner(enChoice playerChoice, enChoice computerChoice)
{
    if (playerChoice == computerChoice)
        return enWinner::Draw;
    if ((playerChoice == enChoice::Stone && computerChoice == enChoice::Scissors) ||
        (playerChoice == enChoice::Paper && computerChoice == enChoice::Stone) ||
        (playerChoice == enChoice::Scissors && computerChoice == enChoice::Paper))
    {
        return enWinner::Player;
    }
    return enWinner::Computer;
}

struct stRoundInfo
{
    enChoice ComputerChoice, UserChoice;
    enWinner Winner;
};

stRoundInfo ReadRoundsInfo()
{
    stRoundInfo roundInfo;
    roundInfo.UserChoice = PlayerChoose();
    roundInfo.ComputerChoice = ComputerChoose();
    roundInfo.Winner = Winner(roundInfo.UserChoice, roundInfo.ComputerChoice);
    return roundInfo;
}

void PrintRoundResults(stRoundInfo roundInfo)
{
    cout << "Player choice: " << ChoiceToString(roundInfo.UserChoice) << "\n";
    cout << "Computer choice: " << ChoiceToString(roundInfo.ComputerChoice) << "\n";
    cout << "Winner: " << WinnerToString(roundInfo.Winner) << "\n";
}

struct stGameInfo
{
    short playerWinTimes = 0, computerWinTimes = 0, drawTimes = 0;
};

void StartGame(short rounds)
{
    stGameInfo gameInfo;
    for (short i = 1; i <= rounds; i++)
    {
        cout << "\nRound [" << i << "] begins:\n";
        stRoundInfo roundInfo = ReadRoundsInfo();
        PrintRoundResults(roundInfo);

        if (roundInfo.Winner == enWinner::Player)
            gameInfo.playerWinTimes++;
        else if (roundInfo.Winner == enWinner::Computer)
            gameInfo.computerWinTimes++;
        else
            gameInfo.drawTimes++;
    }

    cout << "\nGame Over! Here are the results:\n";
    cout << "Player Wins: " << gameInfo.playerWinTimes << "\n";
    cout << "Computer Wins: " << gameInfo.computerWinTimes << "\n";
    cout << "Draws: " << gameInfo.drawTimes << "\n";
}

void ClearScreen()
{
    system("clear"); // Clear screen for Linux/Mac
}

void CompleteGame()
{
    char complete = 'y';
    do
    {
        ClearScreen();
        StartGame(ReadRoundNumbers("Enter the number of rounds"));
        cout << "Do you want to play another game? (y or n): ";
        cin >> complete;
    } while (complete == 'y' || complete == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));
    CompleteGame();
    return 0;
}