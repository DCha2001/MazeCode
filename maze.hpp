#ifndef MAZE_HPP
#define MAZE_HPP

#include <vector>
#include <stack>

class Maze
{
    public:
        Maze();
        Maze(int size);

        void printMaze();
        void update(bool left, bool right, bool forward, int x, int y);

    private:
        struct coor{
            int x;
            int y;
        };
        struct vertical{
            bool front;
            bool back;
        };
        struct horizontal{
            bool left;
            bool right;
        };

        std::vector<std::vector<int> > maze;
        std::vector<std::vector<bool> > history;
        std::stack<coor> Stack;
        coor curr;
        int sz;

};

#endif