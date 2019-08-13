#include "Physics.hpp"

#include "Stonk/Engine.hpp"

using Stonk::Physics;
using Stonk::State;

auto Physics::update(State &state, float dt) -> void {
    for (auto i : state.entities) {
        i.velocity += i.acceleration * dt;
        i.position += i.velocity * dt;
    }
}

auto operator*(const State &rhs, float scalar) -> State {
    auto newState = State{rhs};

    for (auto i : newState.entities) {
        i.velocity += i.acceleration * scalar;
        i.position += i.velocity * scalar;
    }

    return newState;
}

auto operator*(const State &rhs, double scalar) -> State {
    return rhs * static_cast<float>(scalar);
}

auto operator+(const State &lhs, const State &rhs) -> State {
    auto newState = State{lhs};

    for (auto i = size_t{0}; i < lhs.entities.size(); ++i) {
        newState.entities[i].velocity += rhs.entities[i].velocity;
        newState.entities[i].position += rhs.entities[i].position;
    }

    return newState;
}