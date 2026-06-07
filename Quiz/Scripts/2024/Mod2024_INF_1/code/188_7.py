try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 94;
        if (a)
            c = 9;
        if (b >= -4)
             return 8;
        else 
            c = 6;
        return c;
    }
    
    int main(){
        std::cout << g(0, 0);
        return 0;
    }
    
except: print('error')
