try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-4) and f(4))
except: print('error')
