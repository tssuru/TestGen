try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 28;
        if (a == -4)
            return 2;
        else if (b < 0)
             return 1;
        else 
            c = 3;
        return c;
    }
    
    int main(){
        std::cout << g(-2, -2);
        return 0;
    }
    
except: print('error')
