try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 37;
        if (b == -1)
            return 7;
        if (a >= -3)
             c = 1;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << g(5, 2);
        return 0;
    }
    
except: print('error')
