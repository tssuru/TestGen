try:
    a,b,c=4,3,9
    def h(a):
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=7,5,3
    print(h(b),a,b,c)
    
except: print('error')
