try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 88;
        if (a)
            return 5;
        else if (b == 5)
             c = 8;
        else 
            return 2;
        return c;
    }
    
    int main(){
        std::cout << g(7, 8);
        return 0;
    }
    
except: print('error')
