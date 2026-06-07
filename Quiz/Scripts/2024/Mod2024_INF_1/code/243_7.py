try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 29;
        if (b)
            c = 9;
        if (b < 4)
             c = 5;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << h(-4, -3);
        return 0;
    }
    
except: print('error')
