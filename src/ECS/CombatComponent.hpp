#pragma once
#include <iostream>

#include "../Akuma/CombatLog.hpp"
#include "../Akuma/Pathing/Node.hpp"
#include "../Akuma/RNG/Dice.hpp"
#include "ECS.hpp"
#include "StatComponent.hpp"
#include "TurnComponent.hpp"

struct Weapon;

class CombatComponent : public Component {
  public:
    CombatComponent();
    ~CombatComponent();
    void init();
    void update();
    void draw();

    void attackEntity(Entity *opponent);
    int weaponDamage(int weaponPreHitDie, int weaponHitDie);

    int weaponDamage(int weaponPreHitDie, int weaponHitDie,
                     int weaponCritMultiplier);

    void attackEntity(Pathing::Node *opponentSquare);

  private:
    Dice diceroller;
    void singleHanded(Entity *opponent);
    void logInformation(string info);
    void logInformation(int damage, Entity *opponent);
    void logInformation(int damage, Entity *opponent, Weapon &weapon);
};
