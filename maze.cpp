#include "maze.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>

Maze::Maze()
{
    sz = 16;
    maze.resize(16);
    history.resize(16);

    for(int i = 0; i < 16; ++i){
        maze.at(i).resize(16);
        history.at(i).resize(16);
        std::fill(history.at(i).begin(), history.at(i).end(), false);
    }

}

Maze::Maze(int size)
{
    sz = size;
    maze.resize(size);
    history.resize(size);
    int vert = size;
    int half = size / 2 ;
    int offset = 0;
    
    if (size % 2 == 0){
        vert -= 2;
        offset = 1;
    }
    else{
        vert -= 1;
    }

    
    

    for(int i = 0; i < size; ++i){
        maze.at(i).resize(size);
        history.at(i).resize(size);
        std::fill(history.at(i).begin(), history.at(i).end(), false);

        for(int j = 0; j < size; ++j){
            if (j < half){maze.at(i).at(j) = vert - j;}
            if (j >= half){maze.at(i).at(j) = (vert - half + offset)  - (half - j);}
        }
        if (i < half-1){
            --vert;
        }
        if (i == half - 1){
            vert += offset - 1;
        }
        if (i > half-1){
            ++vert;
        }
        
    }

}

void Maze::printMaze(){
    for(int i = 0; i < sz; ++i){
        for(int j = 0; j < sz; ++j){
            std::cout << maze.at(j).at(i);
            std:: cout << " ";
        }
        std::cout << std::endl;
    }
}

void Maze::update(bool left, bool right, bool forward, int x, int y){
    curr.x = x;
    curr.y = y;
    coor temp{x,y};
    if (right && left && forward){
        Stack.push(temp);
        while (!Stack.empty()){
            
        }
    }
}
