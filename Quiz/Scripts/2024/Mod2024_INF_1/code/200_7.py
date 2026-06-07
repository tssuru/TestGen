try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 48;
        if (a > -4)
            c = 0;
        else if (b > -2)
             return 4;
        else 
            c = 7;
        return c;
    }
    
    int main(){
        std::cout << h(-7, -5);
        return 0;
    }
    
except: print('error')
