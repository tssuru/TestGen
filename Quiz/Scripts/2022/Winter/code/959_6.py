try:
    a,b,c=1,4,8
    def h(a):
        a=3
        b=3
        c=1
        return a+b+c
    
    a,b,c=3,7,1
    print(h(b),a,b,c)
    
except: print('error')
