#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

void startupterminaltext(char url)
{
   fstream newfile;
   newfile.open("dailyterminallifestartuptext.txt",ios::in);
   if (newfile.is_open()){
      string startuptext;
      while(getline(newfile, startuptext)){
          system("clear");
          cout << startuptext << "\n";
}
      newfile.close();
   }
else {
    system("wget %d -q", url);
    startupterminaltext();
    }
}

void terminallifeosbuild(int version1, int version2)
{
     #ifdef _WIN32
        printf("TerminalLife Windows OS Version %d.%d, ", version1, version2);
    #else
        printf("TerminalLife Linux OS Version %d.%d, ", version1, version2);
    #endif
}

void gameloop() {
    int age;
    system("clear");
    printf("Enter Your Age:");
    scanf("%d", &age);
    if (age > 12) {
    printf("Coming Soon To Your Terminal, ");
 }
    
else{
    printf("You Cant Play You Must Be 13 Years Old You Are %d", age);
    exit(01);
}
    system("clear");
    startupterminaltext();
}

int main() {
    terminallifeosbuild(0, 1);
    gameloop("https://github.com/PokeyManatee4/TerminalLife/releases/download/0.1/dailyterminallifestartuptext.txt");
    system ("rm -r dailyterminallifestartuptext.txt");
    return 01;
}
