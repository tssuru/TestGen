try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 18;
        if (a >= -4)
            return 7;
        else if (a == -5)
             return 4;
        else 
            c = 1;
        return c;
    }
    
    int main(){
        std::cout << h(1, 0);
        return 0;
    }
    
except: print('error')
