try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 87;
        if (a <= -4)
            return 2;
        else if (b == 1)
             c = 1;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << g(4, 3);
        return 0;
    }
    
except: print('error')
