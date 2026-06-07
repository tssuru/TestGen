try:
    
    def f(n):
        print("f", end="");
        return n<=-2
    
    print(f(-3) or f(3))
    
except: print('error')
