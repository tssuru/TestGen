try:
    
    def f(n):
        print("f", end="");
        return n<3
    
    print(f(1) or f(9))
    
except: print('error')
