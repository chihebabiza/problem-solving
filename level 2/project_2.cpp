#include <iostream>
using namespace std;

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

int ReadNumberInRange(string message, int from, int to)
{
    int questions;
    do
    {
        cout << message << " ";
        cin >> questions;
    } while (questions < from || questions > to);
    return questions;
}

enum enOperation
{
    Sum = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    MixOp = 5
};

enum enLevel
{
    Easy = 1,
    Mid,
    Hard,
    MixLv
};

struct stGameInfo
{
    bool FinalResult;
    int RightAnswers = 0, WrongAnswers = 0, QuestionsNumber = 0;
    enOperation Operation;
    enLevel Level;
};

struct stRoundInfo
{
    bool IsRight;
};

bool IsPass(int right, int wrong)
{
    return (right > wrong);
}

string ResultToString(bool result)
{
    if (result)
        return "PASS";
    else
        return "FAIL";
}

string OperationTypeToString(enOperation operation)
{
    switch (operation)
    {
    case enOperation::Div:
        return "Div";
    case enOperation::Mul:
        return "Mul";
    case enOperation::Sub:
        return "Sub";
    case enOperation::MixOp:
        return "mix";
    case enOperation::Sum:
        return "Sum";

    default:
        return "invalid inputs";
    }
}

string QuestionLevelToString(enLevel level)
{
    switch (level)
    {
    case enLevel::Easy:
        return "Easy";
    case enLevel::Mid:
        return "Mid";
    case enLevel::Hard:
        return "Hard";
    case enLevel::MixLv:
        return "Mix";
    default:
        return "Invalid Inputs";
    }
}

enLevel ReadLevel()
{
    return (enLevel)ReadNumberInRange("enter question level (1:easy, 2:mid, 3:hard, 4:mix)", 1, 4);
}

enOperation ReadOperation()
{
    return (enOperation)ReadNumberInRange("enter operation type (1:sum, 2:sub, 3:mul, 4:div, 5:mix)", 1, 5);
}

void PrintRoundInfo(stRoundInfo roundInfo)
{
    if (roundInfo.IsRight)
        cout << "Right Answer\n";
    else
        cout << "Wrong Answer\n";
}

void PrintGameInfo(stGameInfo gameInfo)
{
    cout << "\n_____________________________________________\n";
    cout << "Final Result is " << ResultToString(gameInfo.FinalResult) << "\n";
    cout << "\n_____________________________________________\n";
    cout << "Number of questions : " << gameInfo.QuestionsNumber << "\n";
    cout << "Question Level : " << QuestionLevelToString(gameInfo.Level) << "\n";
    cout << "Operation Type : " << OperationTypeToString(gameInfo.Operation) << "\n";
    cout << "Nummber of Right Answers : " << gameInfo.RightAnswers << "\n";
    cout << "Number of Wrong Answers : " << gameInfo.WrongAnswers << "\n";
    cout << "\n_____________________________________________\n";
}

int RandomNumberByLevel(enLevel level)
{
    switch (level)
    {
    case enLevel::Easy:
        return RandomNumber(1, 10);
    case enLevel::Mid:
        return RandomNumber(10, 20);
    case enLevel::Hard:
        return RandomNumber(20, 50);
    default:
        return RandomNumber(1, 50);
    }
}

char DisplayOperation(enOperation operation)
{
    switch (operation)
    {
    case enOperation::Div:
        return '/';
    case enOperation::MixOp:
        return DisplayOperation((enOperation)RandomNumber(1, 4));
    case enOperation::Mul:
        return '*';
    case enOperation::Sub:
        return '-';
    case enOperation::Sum:
        return '+';
    default:
        return '?';
    }
}

bool CheckOperationAnswer(int num1, int num2, char op, int playerAnswer)
{
    switch (op)
    {
    case '+':
        return playerAnswer == (num1 + num2);
    case '-':
        return playerAnswer == (num1 - num2);
    case '*':
        return playerAnswer == (num1 * num2);
    case '/':
        return (num2 != 0) && (playerAnswer == (num1 / num2));

    default:
        return false;
    }
}

void PlayGame(enOperation operation, enLevel level, short QuestionsNumber)
{
    stGameInfo gameInfo;
    gameInfo.Operation = operation;
    gameInfo.Level = level;
    gameInfo.QuestionsNumber = 0;
    gameInfo.RightAnswers = 0;
    gameInfo.WrongAnswers = 0;

    for (int i = 0; i < QuestionsNumber; i++)
    {
        stRoundInfo roundInfo;
        int num1 = RandomNumberByLevel(level);
        int num2 = RandomNumberByLevel(level);

        if (operation == enOperation::Div ||
            (operation == enOperation::MixOp && DisplayOperation(operation) == '/'))
        {
            while (num2 == 0 || num1 % num2 != 0)
            {
                num1 = RandomNumberByLevel(level);
                num2 = RandomNumberByLevel(level);
            }
        }

        char op = DisplayOperation(operation);
        int playerAnswer;
        cout << "Question[" << i + 1 << "/" << QuestionsNumber << "]\n";
        cout << num1 << " " << op << " " << num2 << " = ";
        cin >> playerAnswer;

        bool roundResult = CheckOperationAnswer(num1, num2, op, playerAnswer);
        roundInfo.IsRight = roundResult;
        PrintRoundInfo(roundInfo);

        gameInfo.QuestionsNumber++;
        if (roundResult)
            gameInfo.RightAnswers++;
        else
            gameInfo.WrongAnswers++;

        cout << "\n";
    }

    gameInfo.FinalResult = IsPass(gameInfo.RightAnswers, gameInfo.WrongAnswers);
    PrintGameInfo(gameInfo);
}

void ClearScreen()
{
    system("clear");
}

void RunGame()
{
    char PlayAgain = 'y';
    do
    {
        ClearScreen();
        PlayGame(ReadOperation(), ReadLevel(), ReadNumberInRange("Enter number of questions (1/10)", 1, 10));
        cout << "do you want to play again?(y/n) ";
        cin >> PlayAgain;
    } while (PlayAgain == 'y' || PlayAgain == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));
    RunGame();
    return 0;
}