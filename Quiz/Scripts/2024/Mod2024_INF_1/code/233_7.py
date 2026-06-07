try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 53;
        if (a > -1)
            return 5;
        if (b <= 3)
             c = 7;
        else 
            return 2;
        return c;
    }
    
    int main(){
        std::cout << g(-1, 9);
        return 0;
    }
    
except: print('error')
