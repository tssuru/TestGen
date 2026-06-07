try:
    #include <iostream>
    
    int g(int c){
        int w = 61;
        if (c < 3) 
            w = 5;
        else if (c == 4)
             return 3;
        else
             return 2;
        return w;
    }
    
    int main(){
        std::cout << g(7);
        return 0;
    }
    
except: print('error')
