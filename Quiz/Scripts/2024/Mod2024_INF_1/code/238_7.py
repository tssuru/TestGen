try:
    #include <iostream>
    
    int g(int a, int b){
        int c = 26;
        if (b >= -2)
            c = 0;
        else if (a == 0)
             c = 6;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << g(-3, 6);
        return 0;
    }
    
except: print('error')
