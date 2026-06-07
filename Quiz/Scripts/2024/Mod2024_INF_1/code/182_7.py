try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 90;
        if (b != 2)
            return 6;
        else if (a >= 3)
             c = 7;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << h(-4, -8);
        return 0;
    }
    
except: print('error')
