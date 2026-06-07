try:
    def f(a):
        y=23
        if a: 
            y=7
        if a<=4:
             return 5
        else:
             y=0
        return y
    
    print(f(8))
    
except: print('error')
