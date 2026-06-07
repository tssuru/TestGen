try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 27;
        if (b != 0)
            c = 2;
        if (a <= 2)
             return 8;
        else 
            return 5;
        return c;
    }
    
    int main(){
        std::cout << g(3, 7);
        return 0;
    }
    
except: print('error')
