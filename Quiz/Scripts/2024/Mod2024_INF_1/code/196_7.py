try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 84;
        if (a)
            return 7;
        else if (a < 4)
             c = 1;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << g(9, -2);
        return 0;
    }
    
except: print('error')
