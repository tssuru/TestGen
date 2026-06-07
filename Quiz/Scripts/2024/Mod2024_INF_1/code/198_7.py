try:
    #include <iostream>
    
    int h(int b){
        int v = 78;
        if (b != -5) 
            return 8;
        if (b >= 2)
             v = 2;
        else
             return 1;
        return v;
    }
    
    int main(){
        std::cout << h(-3);
        return 0;
    }
    
except: print('error')
