try:
    
    def f(n):
        print("f", end="");
        return n>-2
    
    print(f(-6) and f(3))
except: print('error')
