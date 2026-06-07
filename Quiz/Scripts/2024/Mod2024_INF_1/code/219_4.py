try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<-4;
    }
    
    int main(){
        std::cout<<(f(-6) && f(6));
        return 0;
    }
    
except: print('error')
