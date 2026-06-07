try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 83;
        if (b != 3)
            return 7;
        else if (a <= -1)
             c = 9;
        else 
            return 7;
        return c;
    }
    
    int main(){
        std::cout << f(9, -3);
        return 0;
    }
    
except: print('error')
