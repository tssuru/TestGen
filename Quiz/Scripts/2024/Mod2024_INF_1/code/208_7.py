try:
    #include <iostream>
    
    int g(int d){
        int y = 64;
        if (d < -4) 
            return 3;
        else if (d > 0)
             y = 7;
        else
             return 1;
        return y;
    }
    
    int main(){
        std::cout << g(0);
        return 0;
    }
    
except: print('error')
