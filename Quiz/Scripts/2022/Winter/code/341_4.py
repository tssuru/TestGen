try:
    def f(b):
        x=50
        if b<=3: 
            x=3
        if b>=-1:
             return 1
        else:
             return 2
        return x
    
    print(f(-9))
    
except: print('error')
