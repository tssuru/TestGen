try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 40;
        if (b <= 2)
            c = 2;
        else if (a >= 3)
             c = 6;
        else 
            return 4;
        return c;
    }
    
    int main(){
        std::cout << h(7, -7);
        return 0;
    }
    
except: print('error')
