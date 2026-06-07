try:
    a,b,c=1,7,3
    def h(a):
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=4,5,7
    print(h(b),a,b,c)
    
except: print('error')
