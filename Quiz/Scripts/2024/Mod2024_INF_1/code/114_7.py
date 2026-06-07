try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 74;
        if (a != -2)
            c = 3;
        else if (b >= -5)
             return 4;
        else 
            c = 5;
        return c;
    }
    
    int main(){
        std::cout << g(4, -5);
        return 0;
    }
    
except: print('error')
