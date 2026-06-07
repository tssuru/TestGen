try:
    #include <iostream>
    
    int h(int b){
        int v = 92;
        if (b < 5) 
            v = 1;
        else if (b >= 4)
             return 2;
        else
             v = 9;
        return v;
    }
    
    int main(){
        std::cout << h(5);
        return 0;
    }
    
except: print('error')
