#include <iostream>
using namespace std;

short ReadRoundNumber(string message)
{
    int numberOfRounds;
    do
    {
        cout << message << "\n";
        cin >> numberOfRounds;
    } while (numberOfRounds < 0);
    return numberOfRounds;
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

string PrintChoice(short number)
{
    switch (number)
    {
    case 1:
        return "stone";
    case 2:
        return "paper";
    case 3:
        return "scissors";
    default:
        return "";
    }
}

string PrintWinner(string user, string pc)
{
    if (pc == user)
    {
        return "No Winner"; // It's a tie
    }
    else if (user == "stone" && pc == "paper")
    {
        return "pc"; // Paper beats stone
    }
    else if (user == "stone" && pc == "scissors")
    {
        return "user"; // Stone beats scissors
    }
    else if (user == "paper" && pc == "stone")
    {
        return "user"; // Paper beats stone
    }
    else if (user == "paper" && pc == "scissors")
    {
        return "pc"; // Scissors beats paper
    }
    else if (user == "scissors" && pc == "stone")
    {
        return "pc"; // Stone beats scissors
    }
    else if (user == "scissors" && pc == "paper")
    {
        return "user"; // Scissors beats paper
    }
    else
    {
        return "Invalid Input"; // Handle unexpected inputs
    }
}

void PrintRoundResults(short user, short pc, short i)
{
    cout << "Round " << i + 1 << "\n";
    string pcChoice = PrintChoice(pc);
    string userChoice = PrintChoice(user);
    cout << "computer choice : " << pcChoice << "\n";
    cout << "user choice : " << userChoice << "\n";
    cout << "Winner : " << PrintWinner(userChoice, pcChoice) << "\n";
}

void PrintFinalResults(short numberOfRounds)
{
    cout << "you played " << numberOfRounds << "round\n";
    
}

void StartGame(short numberOfRounds)
{
    short playerChoice, computerChoice;
    for (int i = 0; i < numberOfRounds; i++)
    {
        cout << "____________________________________________\n";
        cout << "Round " << i + 1 << " begin\n";
        cout << "Choose [1]: stone, [2]: paper, [3]: scissors\n";
        cin >> playerChoice;
        computerChoice = RandomNumber(1, 3);
        PrintRoundResults(playerChoice, computerChoice, i);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame(ReadRoundNumber("Enter the number of rounds"));
    return 0;
}