try:
    
    a,b,c=9,6,9
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(b=0,c=4,a=3)
    print(a,b,c)
    
except: print('error')
