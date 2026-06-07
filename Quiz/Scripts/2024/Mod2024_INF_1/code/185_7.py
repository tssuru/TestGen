try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 63;
        if (a != -5)
            c = 8;
        if (b < -3)
             return 5;
        else 
            c = 7;
        return c;
    }
    
    int main(){
        std::cout << h(6, -7);
        return 0;
    }
    
except: print('error')
