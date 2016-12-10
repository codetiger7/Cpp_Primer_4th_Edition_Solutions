//
//  ex_sec7_2.h
//  exercises_chap7
//
//  Created by Brian Opedal on 12/7/16.
//  Copyright © 2016 tech-learn. All rights reserved.
//

#include <string>
#include <numeric>
#include <vector>


#ifndef ex_sec7_2_h
#define ex_sec7_2_h


namespace ex_sec7_2_5
{
    
    
    int vectorSumIs(std::vector<double>::const_iterator beg,
                    std::vector<double>::const_iterator end)
    {
     
        return std::accumulate(beg, end, 0);
    }
    
    
    
    int arraySumIs(int const * beg, int const * end)
    {
        return std::accumulate(beg, end, 0);
    }
    
    int arraySumIs(int const *arr, std::size_t const size)
    {
        int sum = 0;
        for(std::size_t i = 0; i != size; ++i)
        {
            sum += arr[i];
        }
        
        return sum;
    }
    
    int arraySumIs(int const (&arr)[6])
    {
        int sum = 0;
        
        for(size_t i = 0; i != 6; ++i)
        {
            sum += arr[i];
        }
        
        return sum;
    }
    
    
}

namespace ex_sec7_2
{
    bool test(const std::string& s)
    {
        return s.empty();
    }
}


#endif /* ex_sec7_2_h */
