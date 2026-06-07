try:
    a,b,c=5,6,1
    def h(b):
        a=5
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,8,7
    print(h(b),a,b,c)
    
except: print('error')
