try:
    
    def f(n):
        print("f", end="");
        return n==0
    
    print(f(-5) and f(9))
    
except: print('error')
