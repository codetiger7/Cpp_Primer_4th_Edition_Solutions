

struct BitManipulations
{
    unsigned long ul1    = 3;
    unsigned long ul2    = 7;
    
    unsigned long a(unsigned long a = 3, unsigned long b = 7)
    {
        return a & b;
    }
    
    unsigned long b(unsigned long a = 3, unsigned long b = 7)
    {
        return a && b;
    }
    
    
    unsigned long c(unsigned long a = 3, unsigned long b = 7)
    {
        return a | b;
    }
    
    
    unsigned long d(unsigned long a = 3, unsigned long b = 7)
    {
        return a || b;
    }
    
    
    
    
};
