#pragma once

namespace Pathing {
    class Node {
      public:
        Node();
        Node(unsigned _x, unsigned _y) {
            x      = _x;
            y      = _y;
            parent = nullptr;
        }

        Node *parent = nullptr;

        /// gCost + hCost;
        int fCost() const;
        /// Distance from end node
        int hCost = 0;
        /// Distance from starting node
        int gCost = 0;
        /// X location in grid
        unsigned x = 0;
        // Y location in grid
        unsigned y = 0;
        /// If node is traversable then walkable == 1
        bool walkable = 1;

        bool operator<(const Node &rhs) const;
        bool operator==(const Node &rhs) const;

        auto toggleWalkable() -> void;
        auto setWalkable(bool _walkable) -> void;
    };
};