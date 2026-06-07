try:
    
    a,b,c=7,6,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(c=1,a=2,c=5)
    print(a,b,c)
    
except: print('error')
