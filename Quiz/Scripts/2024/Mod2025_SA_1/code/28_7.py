try:
    def f(b):
        v=48
        if b<0: 
            return 9
        if b>5:
             return 1
        else:
             v=6
        return v
    
    print(f(8))
except: print('error')
