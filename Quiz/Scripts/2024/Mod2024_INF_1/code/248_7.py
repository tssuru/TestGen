try:
    #include <iostream>
    
    int h(int d){
        int z = 50;
        if (d != -2) 
            return 2;
        if (d < 3)
             z = 8;
        else
             return 7;
        return z;
    }
    
    int main(){
        std::cout << h(-7);
        return 0;
    }
    
except: print('error')
