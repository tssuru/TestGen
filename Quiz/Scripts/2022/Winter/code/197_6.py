try:
    a,b,c=9,3,5
    def h(b):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=8,3,2
    print(h(b),a,b,c)
    
except: print('error')
