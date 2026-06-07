try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<-2;
    }
    
    int main(){
        std::cout<<(f(9) or f(-6));
        return 0;
    }
    
except: print('error')
