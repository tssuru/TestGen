try:
    def f(a):
        y=82
        if a>=2: 
            y=1
        if a<5:
             y=5
        else:
             return 3
        return y
    
    print(f(-4))
    
except: print('error')
