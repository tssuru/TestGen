try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 73;
        if (b)
            return 0;
        else if (a != 1)
             c = 8;
        else 
            c = 9;
        return c;
    }
    
    int main(){
        std::cout << g(-8, 5);
        return 0;
    }
    
except: print('error')
