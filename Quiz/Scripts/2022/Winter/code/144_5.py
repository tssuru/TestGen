try:
    
    a,b,c=6,6,9
    def f(a,b=7,c=8):
        print(a,b,c,end="")
    
    f(b=2,c=0,a=5)
    print(a,b,c)
    
except: print('error')
