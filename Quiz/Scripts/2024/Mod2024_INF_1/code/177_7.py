try:
    #include <iostream>
    
    int g(int c){
        int y = 31;
        if (c == 2) 
            y = 2;
        else if (c == 1)
             y = 4;
        else
             return 9;
        return y;
    }
    
    int main(){
        std::cout << g(7);
        return 0;
    }
    
except: print('error')
