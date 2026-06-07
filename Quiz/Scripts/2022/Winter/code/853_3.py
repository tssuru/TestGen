try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-9) or f(-4))
    
except: print('error')
