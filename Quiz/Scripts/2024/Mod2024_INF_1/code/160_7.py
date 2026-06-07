try:
    #include <iostream>
    
    int g(int c){
        int w = 74;
        if (c <= -2) 
            w = 0;
        else if (c < 3)
             return 3;
        else
             return 8;
        return w;
    }
    
    int main(){
        std::cout << g(-9);
        return 0;
    }
    
except: print('error')
