try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 78;
        if (a > -4)
            c = 6;
        else if (b <= -3)
             c = 3;
        else 
            return 4;
        return c;
    }
    
    int main(){
        std::cout << g(8, 6);
        return 0;
    }
    
except: print('error')
