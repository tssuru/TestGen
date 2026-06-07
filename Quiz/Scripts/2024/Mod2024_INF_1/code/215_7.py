try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 75;
        if (b)
            return 0;
        if (b == -2)
             c = 8;
        else 
            return 5;
        return c;
    }
    
    int main(){
        std::cout << g(-9, 7);
        return 0;
    }
    
except: print('error')
