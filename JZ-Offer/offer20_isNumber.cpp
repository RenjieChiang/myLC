//
// Created by 10372 on 2021/7/22.
//

#include "offer20_isNumber.h"

bool offer20_isNumber::isNumber(std::string s)
{
    if (s.empty()) return false;

    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
//    if ( i == s.length()-1 ) return false;

    if ( s[i] == '-' || s[i] == '+' )
    {
        i++;
    }
    int num_int = 0;
    bool no_num_before_point = false;
    while ( s[i] != '.' && s[i] && 'e' && s[i] != 'E' )
    {
        if (s[i] >= '0' && s[i] <= '9' )
        {
            i++;
            num_int ++;
        }
        else return false;
        if ( i == s.length()-1 ) return true;
    }
    if ( num_int == 0 )
    {
        if ( s[i] == '.') no_num_before_point = true;
        else return false;
    }

    if ( s[i] == 'e' || s[i] == 'E' )
    {
        i++;
        if ( s[i] == '-' || s[i] == '+' )
        {
            i++;
        }
        int num_int = 0;
        while ( s[i] != ' ')
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                i++;
                num_int ++;
            } else return false;
            if ( i == s.length()-1 ) return true;
        }
        if ( num_int == 0 ) return false;
    }

    if ( s[i] == '.')
    {
        if ( i == s.length()-1 ) return true;
        int num_int = 0;
        i++;
        while ( s[i] != ' ')
        {
            if (s[i] >= '0' && s[i] <= '9')
            {

                num_int ++;
            } else return false;
            if ( i == s.length()-1 ) return true;
            i++;
        }
        if ( num_int == 0 )
        {
            if (no_num_before_point) return false;
            return true;
        }
    }

    while ( i != s.size() )
    {
        if (s[i] != ' ')return false;
        i++;
    }
    return true;
}
