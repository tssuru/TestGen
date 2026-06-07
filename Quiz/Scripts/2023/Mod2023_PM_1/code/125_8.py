try:
    def f(a):
        y=16
        if a: 
            return 9
        elif a<3:
             return 7
        else:
             y=8
        return y
    
    print(f(3))
    
except: print('error')
