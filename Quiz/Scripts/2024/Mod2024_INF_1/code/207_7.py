try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 85;
        if (a >= -3)
            return 3;
        else if (b > 5)
             c = 4;
        else 
            return 7;
        return c;
    }
    
    int main(){
        std::cout << h(7, 8);
        return 0;
    }
    
except: print('error')
