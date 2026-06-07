try:
    #include <iostream>
    
    int f(int d){
        int z = 97;
        if (d <= 4) 
            return 3;
        else if (d >= 2)
             return 1;
        else
             z = 0;
        return z;
    }
    
    int main(){
        std::cout << f(-1);
        return 0;
    }
    
except: print('error')
