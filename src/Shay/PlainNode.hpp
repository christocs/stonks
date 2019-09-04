#pragma once

#include <cmath>
#include <cstddef>
#include <iostream>

#include "Stonk/OpenGl.hpp"

namespace Shay {
    class PlainNode {
      public:
        enum class Slope { FLAT, ZY, XY };

        /**
         * @brief Default constructor, not required
         */
        PlainNode() {
            Clear();
        }

        /**
         * @brief Default Destructor, not required
         */
        ~PlainNode() {
            Clear();
        }

        /**
         * @brief Copy Constructor, defaulted
         */
        PlainNode(const PlainNode &newNode) = default;

        /**
         * @brief Copy assignment, defaulted
         */
        PlainNode &operator=(const PlainNode &newNode) = default;

        // Depreciated, to be deleted when safe to do so.
        void Clear();

        /*
         * @brief Gets the Type value from the node
         */
        Slope GetType();

        /*
         * @brief Gets the X start value from the node
         */
        GLfloat GetXstart();

        /*
         * @brief Gets the X end value from the node
         */
        GLfloat GetXend();

        /*
         * @brief Gets the Y start value from the node
         */
        GLfloat GetYstart();

        /*
         * @brief Gets the Y end value from the node
         */
        GLfloat GetYend();

        /*
         * @brief Gets the Z start value from the node
         */
        GLfloat GetZstart();

        /*
         * @brief Gets the Z end value from the node
         */
        GLfloat GetZend();

        /**
         * @brief  Sets the data at the given point in the array.
         */
        void SetData(Slope tempType, GLfloat tempXs, GLfloat tempXe, GLfloat tempYs,
                     GLfloat tempYe, GLfloat tempZs, GLfloat tempZe);

      private:
        /// Stores type of plain:
        /// (0: flat plane)
        /// (1: incline from z to y)
        /// (2: incline from x to y)
        Slope m_type{};

        /// stores start and end co-ordinates of plane on x, y and z axis
        GLfloat m_xPlainStart = 0, m_xPlainEnd = 0;
        GLfloat m_yPlainStart = 0, m_yPlainEnd = 0;
        GLfloat m_zPlainStart = 0, m_zPlainEnd = 0;
    };
}