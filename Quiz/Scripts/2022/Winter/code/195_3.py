try:
    
    def f(n):
        print("f", end="");
        return n==1
    
    print(f(-5) and f(-7))
    
except: print('error')
