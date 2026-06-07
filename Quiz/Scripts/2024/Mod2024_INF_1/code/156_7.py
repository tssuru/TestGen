try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 13;
        if (a)
            c = 9;
        else if (a == 5)
             c = 0;
        else 
            return 5;
        return c;
    }
    
    int main(){
        std::cout << g(-9, -8);
        return 0;
    }
    
except: print('error')
