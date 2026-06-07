try:
    a,b,c=0,6,6
    def h(b):
        a=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=7,8,3
    print(h(b),a,b,c)
    
except: print('error')
