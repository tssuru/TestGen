try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 19;
        if (a == 2)
            return 7;
        else if (b <= 5)
             c = 5;
        else 
            return 0;
        return c;
    }
    
    int main(){
        std::cout << g(6, 4);
        return 0;
    }
    
except: print('error')
