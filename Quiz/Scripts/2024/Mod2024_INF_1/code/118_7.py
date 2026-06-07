try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 15;
        if (a)
            c = 6;
        if (b > 2)
             return 1;
        else 
            c = 7;
        return c;
    }
    
    int main(){
        std::cout << h(2, -8);
        return 0;
    }
    
except: print('error')
