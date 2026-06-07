try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-8) or f(8))
    
except: print('error')
