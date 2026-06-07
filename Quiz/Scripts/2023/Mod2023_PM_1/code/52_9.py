try:
    a,b,c=2,6,9
    def h(b):
        a=3
        b*=1
        c=2
        return a+b+c
    
    a,b,c=1,2,8
    print(h(b),a,b,c)
    
except: print('error')
