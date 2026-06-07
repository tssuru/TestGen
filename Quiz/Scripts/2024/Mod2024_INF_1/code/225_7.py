try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 11;
        if (b)
            return 3;
        else if (a == -1)
             return 8;
        else 
            c = 4;
        return c;
    }
    
    int main(){
        std::cout << f(8, 8);
        return 0;
    }
    
except: print('error')
