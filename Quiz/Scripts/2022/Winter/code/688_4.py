try:
    def f(b):
        v=21
        if b: 
            v=0
        if b==5:
             return 9
        else:
             v=3
        return v
    
    print(f(4))
    
except: print('error')
