try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 81;
        if (a >= 5)
            c = 3;
        else if (b != -3)
             return 2;
        else 
            c = 7;
        return c;
    }
    
    int main(){
        std::cout << g(2, 1);
        return 0;
    }
    
except: print('error')
