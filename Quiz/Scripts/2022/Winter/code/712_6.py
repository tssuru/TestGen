try:
    a,b,c=1,3,5
    def h(b):
        a=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=6,3,9
    print(h(b),a,b,c)
    
except: print('error')
