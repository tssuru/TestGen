try:
    def g(b):
        x=16
        if b>-2: 
            x=8
        if b==0:
             return 3
        else:
             return 4
        return x
    
    print(g(4))
    
except: print('error')
