try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 50;
        if (b)
            c = 9;
        if (a > 4)
             return 1;
        else 
            c = 0;
        return c;
    }
    
    int main(){
        std::cout << g(-3, 9);
        return 0;
    }
    
except: print('error')
