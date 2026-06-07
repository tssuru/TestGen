try:
    
    def f(n):
        print("f", end="");
        return n<=-1
    
    print(f(2) or f(-3))
    
except: print('error')
