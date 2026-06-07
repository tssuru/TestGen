try:
    
    a,b,c=7,9,6
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(b=0,c=2,a=5)
    print(a,b,c)
    
except: print('error')
