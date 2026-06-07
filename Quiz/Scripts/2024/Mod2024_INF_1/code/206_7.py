try:
    #include <iostream>
    
    int f(int c){
        int z = 48;
        if (c) 
            return 6;
        if (c != 0)
             z = 2;
        else
             z = 7;
        return z;
    }
    
    int main(){
        std::cout << f(-2);
        return 0;
    }
    
except: print('error')
