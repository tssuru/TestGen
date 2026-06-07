try:
    a,b,c=3,2,0
    def h(a):
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=1,6,7
    print(h(b),a,b,c)
    
except: print('error')
