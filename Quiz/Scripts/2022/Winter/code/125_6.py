try:
    a,b,c=2,5,7
    def h(a):
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=0,8,4
    print(h(b),a,b,c)
    
except: print('error')
