try:
    #include <iostream>
    
    int g(int a){
        int x = 57;
        if (a <= -3) 
            return 2;
        else if (a > -4)
             x = 1;
        else
             x = 6;
        return x;
    }
    
    int main(){
        std::cout << g(-2);
        return 0;
    }
    
except: print('error')
