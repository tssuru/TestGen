try:
    def f(a):
        v=79
        if a: 
            v=2
        if a<5:
             return 8
        else:
             v=5
        return v
    
    print(f(-4))
    
except: print('error')
