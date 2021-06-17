//
// Created by 10372 on 2021/6/17.
//

#ifndef MYLEETCODE_OFFER12_EXIST_H
#define MYLEETCODE_OFFER12_EXIST_H

#include "vector"
#include "string"

class offer12_exist {
public:
    bool exist(std::vector<std::vector<char>> &board,  std::string& word);

private:
    bool existInBackTracking(std::vector<std::vector<char>> &board, std::string & word, int ** a ,int i,int j, int n, int size_length, int size_width, int size_word);
};


#endif //MYLEETCODE_OFFER12_EXIST_H
