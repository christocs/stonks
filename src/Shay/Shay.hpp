#pragma once

#include <time.h>

#include <SDL2/SDL.h>

#include "Camera.hpp"
#include "TexturedPolygons.hpp"

namespace Shay {

    /**
     * @brief A shay enum, no one knows
     */
    enum ShayAxis : GLuint { XY = 0, XZ, YZ, YZ_FLIP, XY_FLIP };

    /**
     * @brief Enum list for all texture types
     */
    enum ShayTexture : GLuint {
        GRASS = 0,
        GRASS_2,
        GRASS_HILL,
        PAVEMENT,
        PAVEMENT_TOP,
        PAVEMENTSIDE_LEFT,
        PAVEMENTSIDE_RIGHT,
        PAVEMENTSIDE_TOP,
        PAVEMENT_CORNER_1,
        PAVEMENT_CORNER_2,
        PAVEMENT_FLIP,
        PAVEMENT_TOP_FLIP,
        PAVEMENT_16,
        DOORPAVE_1,
        WALL_BRICK_YZ,
        WALL_BRICK_XY,
        WALL_BRICK_XY_87WIDTH,
        WALL_BRICK_GAP_YZ,
        WALL_BRICK_GAP2_YZ,
        WALL_BRICK_USD_YZ,
        WALL_BRICK_XY_END,
        WALL_BRICK_YZ_END,
        WALL_GAP_1,
        WALL_BRICK_3_4,
        SHADOW_BRICK,
        WALL_BRICK_SEC_SIGN,
        WINDOWPOST_CHANC_FRONT,
        WINDOWPOST_CHANC_RIGHT,
        WINDOWPOST_CHANC_LEFT,
        WINDOWLEDGE_CHANC_FRONT,
        WINDOWLEDGE_CHANC_TOP,
        WINDOWPOST_PHYSSCI_FRONT,
        WINDOWPOST_PHYSSCI_RIGHT,
        WINDOWPOST_PHYSSCI_LEFT,
        WINDOWPOST_LIB_FRONT,
        WINDOWPOST_LIB_LEFT,
        WINDOWPOST_LIB_RIGHT,
        DOOR_POST_SECURITY,
        WINDOWLEDGE_PS_FRONT,
        WINDOWLEDGE_PS_TOP,
        WINDOWLEDGE_PS_BOTT,
        WINDOWLEDGE_LIB_A,
        WINDOWLEDGE_LIB_B,
        WINDOWLEDGE_LIB_TOP_A,
        WINDOWLEDGE_LIB_TOP_B,
        WINDOW_LEDGE_END_1,
        WINDOW_LEDGE_END_2,
        MAIN_POST,
        MAIN_POST_2,
        DOOR_POST_CHANC,
        DOOR_SIDEPOST_CHANC,
        DOOR_POST_LIB,
        PURPLE_POST,
        PURPLE_POSTSIDE,
        RED_POST,
        RED_POSTSIDE,
        ROOF_TOP,
        ROOF_TOP_LIB,
        ROOF_PLANKS,
        ROOF_BEAM_1,
        ROOF_PLANKS_2,
        ROOF_BEAM_2,
        BELOW_ROOF_FILL,
        ROOF_BEAM_3,
        ROOF_BEAM_4,
        ROOF_BEAM_3_TOP,
        KBLT,
        KBLT_EDGE,
        KBLT_EDGE_2,
        KBLT_EDGE_CORNER,
        KBLT_SIDE_1,
        KBLT_SIDE_2,
        NEXUS_SIGN,
        NEXUS_SIDE,
        SECURITY_SIGN,
        SECURITY_SIGN_2,
        SIGN_1,
        SIGN_1_SIDE_1,
        SIGN_1_SIDE_2,
        SIGN_2,
        SIGN_2_SIDE,
        PSC_SIGN,
        PSC_SIGN_2,
        CO_SIGN,
        STA_TRAVEL,
        STA_TRAVEL_EDGE,
        STA_TRAVEL_BRACKET,
        STA_TRAVEL_2,
        STA_TRAVEL_BOTTOM,
        TOILET_MEN,
        TOILET_WOMEN,
        GS_SIGN,
        GS_SIGN_2,
        GS_SIGN_EDGE,
        MAP_2,
        GLASS_BOARD,
        GLASS_BOARD_2,
        GLASS_BOARD_3,
        GLASS_B_SIDE,
        RUSTY_MAN,
        NO_SMOKE_SIGN,
        CARPET,
        DRINKS_SIDE,
        DRINKS_TOP,
        DRINKS_EDGE,
        DRINKS_SIDE_2,
        COKE_MACHINE,
        COFFEE_MACHINE,
        SWEET_MACHINE,
        MACHINE_SIDES,
        MACHINE_SIDES_2,
        Textures,
        TELEPHONE_BACK,
        TELEPHONE_FRONT,
        TELEPHONE_SIDE_1,
        TELEPHONE_FRONT_2,
        TELEPHONE_MAIN_SIDE,
        TELEPHONE_TOP_1,
        TELEPHONE_SIDE_2,
        TELEPHONE_TOP_2,
        TELEPHONE_BOTTOM,
        TELEPHONE_FILL,
        TELEPHONE_FRONT_3,
        STEPS_LIBRARY,
        STEPS_LIBRARY_TOP,
        STEP_PAVING_1,
        STEP_EDGE,
        WINDOW_1,
        WINDOW_2,
        WINDOW_3,
        WINDOW_4,
        WINDOW_5,
        WINDOW_6,
        WINDOW_7,
        WINDOW_8,
        WINDOW_9,
        WINDOW_10,
        WINDOW_11,
        WINDOW_12,
        WINDOW_13,
        WINDOW_14,
        WINDOW_14B,
        WINDOW_15,
        WINDOW_16,
        WINDOW_17,
        WINDOW_2B,
        WINDOW_2C,
        WINDOW_2US,
        WINDOW_3B,
        WINDOW_2USB,
        WINDOW_LIB_1,
        WINDOW_LIB_1A,
        WINDOW_LIB_1B,
        WINDOW_LIB_1C,
        WINDOW_LIB_US_A,
        WINDOW_LIB_US_B,
        WINDOW_LIB_DOOR_1,
        WINDOW_LIB_DOOR_2,
        WINDOW_LIB_LONG,
        ENTRANCE,
        ENTRANCE_2,
        EXIT_EAST,
        EXIT_WEST,
        CHANC_DOOR_1,
        CHANC_DOOR_2,
        WINDOW_2D,
        WINDOW_2E,
        WINDOW_1B,
        STEP_WINDOW,
        ABOVE_WINDOW_BLOCK,
        ABOVE_WINDOW_BLOCK_2,
        ABOVE_WINDOW_BLOCK_3,
        ABOVE_WINDOW_EDGE_3B,
        ABOVE_WINDOW_BLOCK_XY_3,
        ABOVE_LIB,
        ABOVE_UNDER_POSTS,
        ABOVE_UNDER_POSTS_2,
        ABOVE_WINDOW_UNDER_LIB,
        ABOVE_WINDOW_BLOCK_CHANC,
        ABOVE_WINDOW_EDGE_3B_LIB,
        ABOVE_WINDOW_EDGE_4B_LIB,
        ABOVE_UNDER_4B,
        ABOVE_CHANC_TEXT,
        ABOVE_CHANC_TEXT_2,
        ABOVE_PHYS_SCI_TEXT,
        ABOVE_CHANC_TEXT_3,
        ABOVE_LIB_TEXT,
        ABOVE_LIB_TEXT_2,
        ABOVE_TICKETS_TEXT,
        ABOVE_CHANC_EDGE,
        TOILET_DOOR_TOP,
        LIGHT,
        LIGHT_SUPPORT,
        LIGHT_SUPPORT_2,
        BENCH_TOP,
        BENCH_SIDE,
        BENCH_SIDE_2,
        BENCH_EDGE,
        BENCH_EDGE_TOP,
        BENCH_EDGE_SIDE,
        BENCH_EDGE_TOP_2,
        BENCH_EDGE_2,
        BENCH_EDGE_3,
        TICKET_COUNTER_TOP,
        TICKET_COUNTER_EDGE,
        TICKET_COUNTER_EDGE_2,
        TICKET_COUNTER_EDGE_3,
        TICKET_LEDGE,
        TICKET_LEDGE_EDGE,
        TICKET_LEDGE_EDGE_2,
        WALL_BRICK_STEPS_TOP,
        WALL_BRICK_STEPS,
        WALL_BRICK_STEPS_COVER,
        WALL_BRICK_STEPS_EDGE,
        WALL_BRICK_STEPS_EDGE_2,
        DRAINPIPE,
        COUNTER_TOP,
        COUNTER_SIDE,
        MAP,
        WELCOME,
        EXIT,
        NO_EXIT,
    };

    class ShaysWorld {
      public:
        GLfloat stepIncrement  = 0.0f;
        GLfloat angleIncrement = 0.0f;

        int frameCount    = 0;
        clock_t lastClock = {};

        int width    = 0;
        int height   = 0;
        double ratio = 0.0;

        /// Toggle for displaying on screen map
        bool DisplayMap = false;

        /// Toggle for displaying the welcome screen
        bool DisplayWelcome = true;

        /// Toggle for displaying the exit screen
        bool DisplayExit = false;

        /// Toggle for displaying all lights
        bool lightsOn = true;

        /// Toggle for displaying ECL
        bool displayECL = true;

        /// Toggle for displaying the debugMenu
        bool displayDebug = true;

        /// Toggle for drawing 3d axis
        bool shouldDrawAxis = false;

        GLfloat step                = 0.0f;
        GLfloat step2               = 0.0f;
        GLfloat stepLength          = 0.0f;
        GLUquadricObj *glu_cylinder = nullptr;

        /**
         * @brief Camera object
         */
        Camera cam = {};

        /**
         * @brief Textured polygon object
         */
        TexturedPolygons tp = {};

        /**
         * @brief Shays world default constructor
         */
        ShaysWorld();

        /**
         * @brief Returns the current shaysWorld isntance
         * @return The current ShaysWorld instance
         */
        static auto get() -> ShaysWorld &;

        /**
         * @brief Handles Key events passed from the SDL2 subsystem
         * @param event The SDL2 event being read from
         */
        auto handleKeyEvents(SDL_Event &event) -> void;

        /**
         * @brief Displays on screen signs, like the welcome screen
         */
        auto DisplaySigns() -> void;

        /**
         * @brief Draws a 3-dimensional spatial axis at the given coordinates at the given length
         * @param x The x-coordinate to start the axis
         * @param y The y-coordinate to start the axis
         * @param z The z-coordinate to start the axis
         * @param length The amount to extend the axis lines in each respective direction
         */
        auto drawAxis(float x, float y, float z, float length) -> void;

        /**
         * @brief Displays the IMGUI debug menu
         */
        void DisplayDebugMenu();

        /**
         * @brief Initialises all the variables needed to display Shay's World
         */
        void Init();

        /**
         * @brief Calls all other display functions to display Shay's world
         */
        void Display();

        /**
         * @brief Updates camera variables based on the delta time between frames
         */
        void Update(double dt);

        /**
         * @brief Draws the backdrop
         */
        void DrawBackdrop();

        /**
         * @brief Displays objects above the window block
         */
        void DisplayAboveWindowBlock();

        /**
         * @brief Displays the benches
         */
        void DisplayBench();

        /**
         * @brief Displays the benches
         */
        void DisplayBricks();

        /**
         * @brief Displays the chancellor side posts
         */
        void DisplayChancPosts();

        /**
         * @brief Dispays all cylinders
         */
        void DisplayCylinders();

        /**
         * @brief Displays Door paving
         */
        void DisplayDoorPaving();

        /**
         * @brief Displays Door posts
         */
        void DisplayDoorPosts();

        /**
         * @brief Displays Entrance steps
         */
        void DisplayEntranceSteps();

        /**
         * @brief Displays Tavern Steps
         */
        void DisplayTavSteps();

        /**
         * @brief Displays extras
         */
        void DisplayExtras();

        /**
         * @brief Displays grass
         */
        void DisplayGrass();

        /**
         * @brief Displays larger textures
         */
        void DisplayLargerTextures();

        /**
         * @brief Displays Library posts
         */
        void DisplayLibraryPosts();

        /**
         * @brief Displays Main posts
         */
        void DisplayMainPosts();

        /**
         * @brief Displays Pavement
         */
        void DisplayPavement();
        /**
         * @brief Displays Physical science building posts
         */
        void DisplayPhysSciPosts();

        /**
         * @brief Displays purple posts
         */
        void DisplayPurplePosts();

        /**
         * @brief Displays Red posts
         */
        void DisplayRedPosts();

        /**
         * @brief Displays all roofs
         */
        void DisplayRoof();

        /**
         * @brief Displays step bricks
         */
        void DisplayStepBricks();

        /**
         * @brief Displays tavern step bricks
         */
        void DisplayTavStepBricks();

        /**
         * @brief Displays lgihts
         */
        void DisplayLights();

        /**
         * @brief Displays ECL ( does nothing)
         */
        void DisplayECL();

        /**
         * @brief Creates list of textures
         */
        void CreateTextureList();

        /**
         * @brief Draws grass
         */
        void DrawGrass();

        /**
         * @brief Draws chancellor posts
         */
        void DrawChancPosts();

        /**
         * @brief Draws door posts
         */
        void DrawDoorPosts();

        /**
         * @brief Draws purple posts
         */
        void DrawPurplePosts();

        /**
         * @brief Draws red posts
         */
        void DrawRedPosts();

        /**
         * @brief Draws main posts
         */
        void DrawMainPosts();

        /**
         * @brief Draws area above window block
         */
        void DrawAboveWindowBlock();

        /**
         * @brief Draws door paving
         */
        void DrawDoorPaving();

        /**
         * @brief Draws physical science building posts
         */
        void DrawPhysSciPosts();

        /**
         * @brief Draws library posts
         */
        void DrawLibraryPosts();

        /**
         * @brief Draws bricks
         */
        void DrawBricks();

        /**
         * @brief Draws pavement
         */
        void DrawPavement();

        /**
         * @brief Draws extras
         */
        void DrawExtras();

        /**
         * @brief Draws roof
         */
        void DrawRoof();

        /**
         * @brief Draws extrance steps
         */
        void DrawEntranceSteps();

        /**
         * @brief Draws tavern steps
         */
        void DrawTavSteps();

        /**
         * @brief Draws larger textures
         */
        void DrawLargerTextures();

        /**
         * @brief Draws lights
         */
        void DrawLights();

        /**
         * @brief Draws benches
         */
        void DrawBench();

        /**
         * @brief Draws cylinders
         */
        void DrawCylinders();

        /**
         * @brief Draws angled roof beams
         * @param listNo The list number to create the new list as
         * @param x The x coordinate of the start location of the beam
         * @param y The y coordinate of the start location of the beam
         * @param z The z coordinate of the start location of the beam
         * @param beamSize The beam length
         */
        void DrawAngledRoofBeam(GLuint listNo, GLfloat x, GLfloat y, GLfloat z,
                                GLfloat beamSize);

        /**
         * @brief Draws angled roof beams
         * @param listNo The list number to create the new list as
         * @param x The x coordinate of the start location of the beam
         * @param y The y coordinate of the start location of the beam
         * @param z The z coordinate of the start location of the beam
         * @param beamSize The beam length
         */
        void DrawAngledRoofBeam2(GLuint listNo, GLfloat x, GLfloat y, GLfloat z,
                                 GLfloat beamSize);

        /**
         * @brief Draws step bricks
         */
        void DrawStepBricks();
        /**
         * @brief Draws tavern step bricks
         */
        void DrawTavStepBricks();

        /**
         * @brief Draws map exit
         */
        void DrawMapExit();

        /**
         * @brief Increments the current frame cout
         */
        void IncrementFrameCount();

        /**
         * @brief Creates all textures
         */
        void CreateTextures();

        /**
         * @brief Creates all original shay bounding boxes
         */
        void CreateBoundingBoxes();

        /**
         * @brief Creates post bounding boxes
         */
        void CreatePostBoundingBoxes();

        /**
         * @brief Creates the angled plains
         */
        void CreatePlains();

        /**
         * @brief Frees an image from memory
         * @param tempImage The pointer to the unsigned char array to free
         */
        void DeleteImageFromMemory(unsigned char *tempImage);

        /**
         * @brief Returns a pointer to the Shay camera
         * @return A pointer to the shay camera
         */

        auto getCamPtr() -> Shay::Camera *;
    };
}
