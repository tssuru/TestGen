try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 14;
        if (a)
            c = 0;
        else if (a > -2)
             return 5;
        else 
            c = 6;
        return c;
    }
    
    int main(){
        std::cout << g(-1, 5);
        return 0;
    }
    
except: print('error')
