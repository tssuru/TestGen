try:
    a,b,c=7,6,4
    def h(a):
        a=2
        b+=4
        c=2
        return a+b+c
    
    a,b,c=2,6,8
    print(h(b),a,b,c)
    
except: print('error')
