//
// Created by tianbot on 2021/3/26.
//

#include "LCPrimaryString9.h"

std::string LCPrimaryString9::longestCommonPrefix(std::vector<std::string> &strs)
{
    if (strs.empty())
        return "";
    if (strs.size() == 1)
        return strs[0];
    std::string result = strs[0];
    int i = 1;
    size_t str_size = 0;
    size_t res_size = 0;
    while (!result.empty() && i < strs.size())
    {
        str_size = strs[i].size();
        if (str_size < result.size())
            result.erase(result.begin()+str_size, result.end());
        res_size = result.size();
        for (int j = 0; j < str_size && j < res_size; ++j)
        {
            if (result[j] != strs[i][j])
            {
                result.erase(result.begin()+j, result.end());
                break;
            }
        }
        i++;
    }
    return result;
}
