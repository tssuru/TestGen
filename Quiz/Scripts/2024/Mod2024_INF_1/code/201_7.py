try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 69;
        if (b <= -5)
            return 6;
        if (b < -1)
             return 3;
        else 
            c = 8;
        return c;
    }
    
    int main(){
        std::cout << g(4, 2);
        return 0;
    }
    
except: print('error')
