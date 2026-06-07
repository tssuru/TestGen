try:
    a,b,c=2,1,6
    def h(a):
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=4,7,9
    print(h(b),a,b,c)
    
except: print('error')
