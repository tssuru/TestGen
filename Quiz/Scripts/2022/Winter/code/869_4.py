try:
    def f(b):
        v=84
        if b!=-1: 
            v=7
        if b<3:
             return 1
        else:
             v=9
        return v
    
    print(f(-7))
    
except: print('error')
