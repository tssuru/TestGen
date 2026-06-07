try:
    a,b,c=2,9,6
    def h(b):
        a=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,6,5
    print(h(b),a,b,c)
except: print('error')
