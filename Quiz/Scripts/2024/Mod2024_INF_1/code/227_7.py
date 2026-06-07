try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 66;
        if (b < -2)
            return 9;
        if (a >= 5)
             c = 5;
        else 
            c = 6;
        return c;
    }
    
    int main(){
        std::cout << h(-7, 3);
        return 0;
    }
    
except: print('error')
