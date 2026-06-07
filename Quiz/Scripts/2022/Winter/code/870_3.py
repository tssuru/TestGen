try:
    
    def f(n):
        print("f", end="");
        return n<=3
    
    print(f(-5) and f(1))
    
except: print('error')
