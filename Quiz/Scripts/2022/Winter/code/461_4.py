try:
    def f(a):
        v=69
        if a: 
            return 1
        elif a==4:
             v=7
        else:
             return 2
        return v
    
    print(f(6))
    
except: print('error')
