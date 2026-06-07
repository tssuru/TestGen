try:
    #include <iostream>
    
    int f(int c){
        int z = 18;
        if (c >= 5) 
            return 4;
        else if (c != -5)
             z = 9;
        else
             return 8;
        return z;
    }
    
    int main(){
        std::cout << f(0);
        return 0;
    }
    
except: print('error')
