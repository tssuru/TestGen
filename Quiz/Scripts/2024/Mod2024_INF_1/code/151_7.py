try:
    #include <iostream>
    
    int g(int d){
        int y = 20;
        if (d) 
            y = 9;
        if (d >= -4)
             return 9;
        else
             y = 0;
        return y;
    }
    
    int main(){
        std::cout << g(-8);
        return 0;
    }
    
except: print('error')
