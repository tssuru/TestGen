try:
    
    def f(n):
        print("f", end="");
        return n>-1
    
    print(f(-4) and f(-9))
    
except: print('error')
