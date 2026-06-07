try:
    a,b,c=7,3,4
    def h(b):
        a=3
        b*=1
        c=1
        return a+b+c
    
    a,b,c=1,8,0
    print(h(b),a,b,c)
    
except: print('error')
