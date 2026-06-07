try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-7) or f(-8))
    
except: print('error')
