#include "StatComponent.hpp"

StatComponent::StatComponent()  = default;
StatComponent::~StatComponent() = default;
StatComponent::StatComponent(CharacterSheet newStat) {
    this->stat = newStat;
}

void StatComponent::init() {}
void StatComponent::update() {}
void StatComponent::draw() {}

auto StatComponent::getStrengthMod() -> int {
    return getMod(this->stat.strength);
}
auto StatComponent::getIntelligenceMod() -> int {
    return getMod(this->stat.intelligence);
}
auto StatComponent::getDexterityMod() -> int {
    return getMod(this->stat.dexterity);
}
auto StatComponent::getLuckMod() -> int {
    return getMod(this->stat.luck);
}
auto StatComponent::getVitalityMod() -> int {
    return getMod(this->stat.vitality);
}

auto StatComponent::getStatSheet() -> CharacterSheet & {
    return stat;
}

auto StatComponent::setStatSheet(CharacterSheet newStat) -> void {
    this->stat = newStat;
}

auto StatComponent::getMod(int checkStat) -> int {
    if (checkStat <= 1) {
        return -5;
    } else if (checkStat < 4) {
        return -4;
    } else if (checkStat < 6) {
        return -3;
    } else if (checkStat < 8) {
        return -2;
    } else if (checkStat < 10) {
        return -1;
    } else if (checkStat < 12) {
        return 0;
    } else if (checkStat < 14) {
        return 1;
    } else if (checkStat < 16) {
        return 2;
    } else if (checkStat < 18) {
        return 3;
    } else if (checkStat < 20) {
        return 4;
    } else if (checkStat < 22) {
        return 5;
    } else if (checkStat < 24) {
        return 6;
    } else if (checkStat < 26) {
        return 7;
    } else if (checkStat < 28) {
        return 8;
    } else if (checkStat < 30) {
        return 9;
    } else if (checkStat > 30) {
        return 10;
    } else {
        return 0;
    }
}