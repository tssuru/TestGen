try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 95;
        if (b > 2)
            c = 2;
        if (b < -3)
             return 1;
        else 
            c = 0;
        return c;
    }
    
    int main(){
        std::cout << g(6, -5);
        return 0;
    }
    
except: print('error')
