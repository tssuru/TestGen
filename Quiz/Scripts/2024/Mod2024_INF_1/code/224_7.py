try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 72;
        if (b != -5)
            return 9;
        if (a <= 1)
             c = 0;
        else 
            c = 2;
        return c;
    }
    
    int main(){
        std::cout << g(2, -4);
        return 0;
    }
    
except: print('error')
