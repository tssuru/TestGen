try:
    #include <iostream>
    
    int g(int b){
        int w = 68;
        if (b < -4) 
            w = 9;
        if (b != -5)
             return 7;
        else
             w = 1;
        return w;
    }
    
    int main(){
        std::cout << g(0);
        return 0;
    }
    
except: print('error')
