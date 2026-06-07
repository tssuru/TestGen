try:
    a,b,c=3,6,8
    def h(b):
        a=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=2,0,9
    print(h(b),a,b,c)
except: print('error')
