/*
  main.cpp
 
  Моя учёба в SkillBox на курсе "Разработчик игр на Unreal Engine 4" (C++)
 
  SkillBox_Homework 18.5

  Created by Tony Stark817(Nikolay Gridin) on 04.06.2023.
*/

#include <iostream>
#include <vector>

using namespace std;

class Player
{
public:
  string name;
  int points;
};
int main() {
  vector<Player> players;
  cout << "Введите количество игроков: ";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Имя игрока " << i + 1 << ": ";
    getline(cin, players[i].name);
    players[i].points = 0;
    cout << "Количество очков: ";
    cin >> players[i].points;
  }
  sort(players.begin(), players.end(), [](const Player& a, const Player& b) { return a.points < b.points; });
  for (const auto& player : players) {
    cout << player.name << " - " << player.points << endl;
  }
  return 0;
}