try:
    
    def f(n):
        print("f", end="");
        return n>=-4
    
    print(f(-1) or f(0))
    
except: print('error')
