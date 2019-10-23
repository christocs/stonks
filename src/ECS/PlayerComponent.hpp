#pragma once

#include "../Akuma/Floor.hpp"
#include "Akuma/Akuma.hpp"
#include "CombatComponent.hpp"
#include "ECS.hpp"
#include "EnemyComponent.hpp"
#include "MoveComponent.hpp"
#include "PositionComponent.hpp"
#include "TurnComponent.hpp"

/* This will need to handle input to the player */
class PlayerComponent : public Component {
  public:
    enum class Facing { N, NE, E, SE, S, SW, W, NW };
    PlayerComponent()  = default;
    ~PlayerComponent() = default;
    void init();
    void update();
    void draw();
    void setFacing(Facing newFace);
    void setFacing(int i);

    void turnEntity(int i);

    void issueAction();
    void skipTurn();

  private:
    bool issuedAction   = false;
    int turn            = 0;
    Facing facingBuffer = Facing::N;
    Facing facing       = Facing::N;

    glm::uvec2 getNodeFacing(unsigned int x, unsigned int y);

    Pathing::Node *getLookingAtNode();

    void commandExecution();
    /**
     * @brief Draws a square on screen matching the given parameters
     * @param size The size of the square to create
     * @param wireframe Whether to draw a wireframe square or a polygon
     */
    auto drawSquare(float size, bool wireframe) -> void;
    /**
     * @brief Draws a rectangle on screen matching the given parameters
     * @param _height The height of the rectangle to create
     * @param _width The width of the rectangle to create
     * @param wireframe Whether to draw a wireframe or polygon
     */
    auto drawRectangle(float _width, float _height, bool wireframe) -> void;
};
