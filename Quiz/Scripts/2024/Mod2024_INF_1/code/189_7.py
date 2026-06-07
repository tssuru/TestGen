try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 89;
        if (a <= 0)
            return 1;
        else if (b > 1)
             c = 2;
        else 
            return 0;
        return c;
    }
    
    int main(){
        std::cout << g(3, -4);
        return 0;
    }
    
except: print('error')
