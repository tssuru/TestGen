try:
    def g(b):
        v=28
        if b==4: 
            v=7
        if b>=3:
             return 3
        else:
             v=8
        return v
    
    print(g(5))
except: print('error')
