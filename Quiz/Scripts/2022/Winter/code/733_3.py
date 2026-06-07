try:
    
    def f(n):
        print("f", end="");
        return n<=-4
    
    print(f(0) or f(-8))
    
except: print('error')
