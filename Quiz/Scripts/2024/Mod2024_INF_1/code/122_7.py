try:
    #include <iostream>
    
    int h(int a){
        int z = 76;
        if (a < -3) 
            return 9;
        else if (a != 5)
             return 0;
        else
             z = 1;
        return z;
    }
    
    int main(){
        std::cout << h(4);
        return 0;
    }
    
except: print('error')
