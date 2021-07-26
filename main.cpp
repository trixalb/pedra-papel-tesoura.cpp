#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
bool jogando = true;
while(jogando == true)
{
bool perder = false;
int random_number = rand() %(3);
if(random_number == 1)
{
    perder = true;
}
else
{
    perder = false;
}
string jogo;
printf("vez:");
cin >> jogo;
if(perder == false)
{
    if(jogo == "pedra")
    {
    printf("papel");
    }
    if(jogo == "papel")
    {
    printf("tesoura");
    }
    //script para bot perder
    if(jogo == "tesoura")
    {
    printf("papel");
    printf("\n:(");
    }
    cout << "\n\nperdeu noob\n\n";
}
else
{
    if(jogo == "pedra")
    {
    printf("tesoura");
    }
    if(jogo == "papel")
    {
    printf("pedra");
    }
    //script para bot perder
    if(jogo == "tesoura")
    {
    printf("papel");
    }
    cout << "\n\nvenceu noodle\n\n";
}
}
}
