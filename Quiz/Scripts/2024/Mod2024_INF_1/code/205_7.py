try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 62;
        if (a == 0)
            return 9;
        if (a >= 2)
             return 2;
        else 
            c = 9;
        return c;
    }
    
    int main(){
        std::cout << h(-5, 1);
        return 0;
    }
    
except: print('error')
