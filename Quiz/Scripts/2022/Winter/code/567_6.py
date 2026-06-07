try:
    a,b,c=1,0,5
    def h(a):
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=2,9,3
    print(h(b),a,b,c)
    
except: print('error')
