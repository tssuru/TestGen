try:
    a,b,c=4,6,9
    def h(a):
        a=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=3,9,6
    print(h(b),a,b,c)
    
except: print('error')
