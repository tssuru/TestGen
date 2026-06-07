try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(8) and f(-3))
except: print('error')
