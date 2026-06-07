try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 96;
        if (b > 1)
            c = 7;
        if (a != -3)
             c = 5;
        else 
            return 8;
        return c;
    }
    
    int main(){
        std::cout << g(-7, 7);
        return 0;
    }
    
except: print('error')
