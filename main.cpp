#include <iostream> // input output
#include <iomanip>
#include <fstream>
#include <string> // string variables
#include <thread> // flush
#include <unistd.h> // sleep
#include <time.h>
using namespace std;
#define Reset   "\033[0m"
#define Black   "\033[30m"      /* Black */
#define Red     "\033[31m"      /* Red */
#define Green   "\033[32m"      /* Green */
#define Yellow  "\033[33m"      /* Yellow */
#define Blue    "\033[34m"      /* Blue */
#define Magenta "\033[35m"      /* Magenta */
#define Cyan    "\033[36m"      /* Cyan */
#define White   "\033[37m"      /* White */

/* ------------------------------------------
Fill in the header for the Trivia Program 
Programmer: Khoa Nguyen
date: 12/2/21
Description of your program: Trivia program
 --------------------------------------------*/ 

void printTitle()
{

  cout << Green <<"▛" << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << "▜" << endl;
  cout << Green <<"█" << setw(45) << setfill(' ') << "█" << endl;
  cout << Green <<"█" << setw(45) << setfill(' ') << "█" << endl;
  cout << Green <<"█" << setw(45) << setfill(' ') << "█" << endl;

  // this is the blue part of the design with name and date
  cout << Green << "█" << setw(22) << setfill(' ') << Blue << "Khoa Nguyen" << setw(19) << setfill(' ') << Green <<"█\n" ;
  cout << Green << "█" << setw(27) << setfill(' ') << "12/3/2021" << setw(19) << setfill(' ') <<"█\n" ;

  // This is the bottom green part of the design
  cout << Green << "█" << setw(45) << setfill(' ') << "█" << endl;
  cout << Green << "█" << setw(45) << setfill(' ') << "█" << endl;
  cout << Green << "█" << setw(45) << setfill(' ') << "█" << endl;
  cout << Green <<"▙" << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << "▟" << endl;

  cout << White;
  return;
  
}

void printTrademark()
{

  cout<< Red<<  "     )                       )                                 \n";
  cout<< "  ( /(     )              ( /(                                 \n";
  cout<< "  )\()) ( /(          )   )\()) (  (     (   (       (         \n";
  cout<< Yellow<<  "(((_)\\  )\())  (   ( /(  ((_)\\  )\\))(   ))\\  )\\ )   ))\\  (     \n";
  cout<< "(_ ((_)((_)\\   )\\  )(_))  _((_)((_))\\  /((_)(()/(  /((_) )\\ )  \n";

  cout<< White << "| |/ / | |" << Yellow<< "(_) ((_)((_)_ " << White << " | \\| |"<< Yellow << "(()(_)(_))(  )(_))(_))  _(_/(  \n";
  cout<< White << "| ' <  | ' \\ / _ \\/ _` | | .` |/ _` | | || || || |/ -_)| ' \\"<< Yellow << ")) \n";
  cout<< White << "|_|\\_\\ |_||_|\\___/\\__,_| |_|\\_|\\__, |  \\_,_| \\_, |\\___||_||_|  \n";
  cout<< "                               |___/         |__/              \n";

  
}


void convertUpper(string& answers)
{
  
  for (int i=0 ; i < answers.length(); i++)
  {
    answers[i] = toupper(answers[i]);



  }

}

void pokemonTrivia(){


  cout << Yellow << " ____   __  __ _  ____  _  _   __   __ _     " << endl;
  cout << "(  _ \\ /  \\(  / )(  __)( \\/ ) /  \\ (  ( \\   " << endl;
  cout << " ) __/(  O ))  (  ) _) / \\/ \\(  O )/    /      " << endl;
  cout << "(__)   \\__/(__\\_)(____)\\_)(_/ \\__/ \\_)__)" << endl;
  cout <<Blue << " ____  ____  __  _  _  __   __           "<< endl;
  cout << "(_  _)(  _ \\(  )/ )( \\(  ) / _\\         "<< endl;
  cout << "  )(   )   / )( \\ \\/ / )( /    \\       "<< endl;
  cout << " (__) (__\\_)(__) \\__/ (__)\\_/\\_/         "<< endl<< endl;


}

void instructions(){

  cout << Green << "------------------------Information------------------------" << endl;
  cout << endl << White << "- Program NOT case sensitive (capitalization does not matter)" << endl;
  cout << endl << "- All 1 word answers unless specified in question" << endl;
  cout << endl <<"- There are 10 total questions per version" << endl;
  cout << endl << "- No cheating please :D" << endl << endl ;
  cout << endl << "Press enter to continue ->";


}


int main() {
printf("\033[H\033[J"); 

printTitle();
cin.get();
printf("\033[H\033[J"); 



pokemonTrivia();
instructions();







cin.get();
printf("\033[H\033[J"); 

string name;
cout << "Please enter your name: ";
getline (cin, name);
printf("\033[H\033[J"); 





string answers;
char userInput2 = 'y';



cout << "Greetings! " << name << endl;

int userInput;
while (userInput2== 'y'){


cout << "Which version of the Pokemon Trivia do you want to play?" << endl;
cout << Red << "Version 1" << endl;
cout << Blue << "Version 2" << endl << White;


cin >> userInput; // choose version input


// wrong questions file (study guide) ----------------------------------------

ofstream file; // delcare output file variable
file.open("notes.txt"); // open up file

// wrong questions file end ------------------------------------------------


if (userInput == 1 ){
system("clear");
  // version 1 files==========================================================
ifstream answersFile;  // file variable
answersFile.open("answers.txt");  // opens the file
string aArray[100];  // store the questions in an array
int aNumber=0;
bool check [11]; 


while (!answersFile.eof())
{

  aNumber++;

  getline(answersFile,aArray[aNumber]);


}

ifstream questionsFile;  // file variable
questionsFile.open("questions.txt");  // opens the file
string qArray[100]; 
int qNumber=0,r1=0;





while (!questionsFile.eof())
{

  qNumber++;

  getline(questionsFile,qArray[qNumber]);


}




printf("\033[H\033[J"); 
int points=0;
cin.get();

int randomIndex;
srand (time(NULL));
randomIndex = rand()% 10+1;

for (int i=1; i<11; i++) check[i]=false;
for (int i = 1 ; 
i < 11 ; i++)
{
  while (check[randomIndex] == true)
      {
        randomIndex = rand() % 10+1;
      }
  cout<< qArray[randomIndex] << endl;
  check[randomIndex]=true;
  getline (cin, answers); 
  convertUpper(answers);// converts answer to uppercase




  if (answers == aArray[randomIndex])

  {

    cout  << Green << "correct" << White << endl;
    points +=1;
    cin.get();
    printf("\033[H\033[J"); 
  }

  else
  {

    cout <<  Red << "wrong" << White << endl;

    cin.get();
    printf("\033[H\033[J"); 


    file << "QUESTION: " <<  qArray[randomIndex] << "     ANSWER: " <<  aArray[randomIndex] << endl;

  }

}

if (points == 10) //perfect score

{

  for (int a = 1 ; a<= 45; a+=3)
  {
    // this takes a bit to start moving give it like 6-9 seconds
    printf("\033[H\033[J"); 
    cout << setw(a) << "🎉🥳 PERFECT SCORE🥳🎉" << endl << flush;


    cout <<endl;

  sleep(1);

    
  }


}

printf("\033[H\033[J"); 

cout << "Your score is " << points << "/10" << ", would you like to play again? y/n\n";
int userInput=0;

cin >> userInput2;
 printf("\033[H\033[J");


if (userInput2 == 'n')
{
  printf("\033[H\033[J");
  printTrademark();

}


}



// version 2 game ===================================================================
if (userInput == 2){

// version 2 files ===============================================================

ifstream answers2File;  // file variable
answers2File.open("answers2.txt");  // opens the file
string a2Array[100];  // store the questions in an array
int a2Number=0;
bool check2 [11]; 

while (!answers2File.eof())
{

  a2Number++;

  getline(answers2File,a2Array[a2Number]);


}

ifstream questions2File;  // file variable
questions2File.open("questions2.txt");  // opens the file
string q2Array[100];  // store the answers in an array
int q2Number=0;




while (!questions2File.eof())
{

  q2Number++;

  getline(questions2File,q2Array[q2Number]);


}



printf("\033[H\033[J"); 
int points=0;
cin.get();

int randomIndex;
srand (time(NULL));
randomIndex = rand()% 10+1;

for (int i=1; i<11; i++) check2[i]=false;
for (int i = 1 ; 
i < 11 ; i++)
{
  while (check2[randomIndex] == true)
      {
        randomIndex = rand() % 10+1;
      }
  cout << q2Array[randomIndex] << endl;

  check2[randomIndex]=true;
  getline (cin, answers); 
  convertUpper(answers);// converts answer to uppercase




  if (answers == a2Array[randomIndex])

  {

    cout  << Green << "correct" << White << endl;
    points +=1;
    cin.get();
    printf("\033[H\033[J"); 
  }

  else
  {

    cout <<  Red << "wrong" << White << endl;

    cin.get();
    printf("\033[H\033[J"); 


    file << "QUESTION: " <<  q2Array[randomIndex] << "     ANSWER: " <<  a2Array[randomIndex] << endl;

  }

}

if (points == 10) //perfect score

{

  for (int a = 1 ; a<= 45; a+=3)
  {
  // this takes a bit to start moving give it like 6-9 seconds
    printf("\033[H\033[J"); 
    cout << setw(a) << "🎉🥳 PERFECT SCORE🥳🎉" << endl << flush;


    cout <<endl;

    sleep(1);

    
  }


}

printf("\033[H\033[J"); 

cout << "Your score is " << points << "/10" << ", would you like to play again? y/n\n";


cin >> userInput2;
 printf("\033[H\033[J");


if (userInput2 == 'n')
{
 
  printTrademark();

}
}
}

return 0;
} 