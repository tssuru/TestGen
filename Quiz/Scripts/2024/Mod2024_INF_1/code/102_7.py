try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 36;
        if (a)
            c = 9;
        if (b == -1)
             return 4;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << g(3, -6);
        return 0;
    }
    
except: print('error')
