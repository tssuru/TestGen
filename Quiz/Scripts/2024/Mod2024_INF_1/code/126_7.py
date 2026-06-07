try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 25;
        if (a > 3)
            return 9;
        if (a < 3)
             c = 3;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << g(5, 1);
        return 0;
    }
    
except: print('error')
