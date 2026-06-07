try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n;
    }
    
    int main(){
        std::cout<<(f(-6) && f(9));
        return 0;
    }
    
except: print('error')
