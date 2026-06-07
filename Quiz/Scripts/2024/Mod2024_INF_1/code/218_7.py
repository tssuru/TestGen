try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 67;
        if (a < -4)
            c = 2;
        else if (a == -3)
             return 1;
        else 
            c = 4;
        return c;
    }
    
    int main(){
        std::cout << h(1, -5);
        return 0;
    }
    
except: print('error')
