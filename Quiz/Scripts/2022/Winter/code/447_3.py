try:
    
    def f(n):
        print("f", end="");
        return n>-1
    
    print(f(0) and f(-5))
    
except: print('error')
