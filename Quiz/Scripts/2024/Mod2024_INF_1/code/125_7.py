try:
    #include <iostream>
    
    int g(int a){
        int x = 84;
        if (a <= 4) 
            return 2;
        if (a > 1)
             x = 8;
        else
             x = 6;
        return x;
    }
    
    int main(){
        std::cout << g(9);
        return 0;
    }
    
except: print('error')
