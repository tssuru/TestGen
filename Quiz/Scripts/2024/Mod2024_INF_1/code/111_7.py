try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 23;
        if (b == -2)
            c = 4;
        else if (b < 4)
             return 9;
        else 
            return 2;
        return c;
    }
    
    int main(){
        std::cout << h(0, 2);
        return 0;
    }
    
except: print('error')
