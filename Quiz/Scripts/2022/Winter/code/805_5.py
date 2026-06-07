try:
    
    a,b,c=8,7,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=5,c=2,a=1)
    print(a,b,c)
    
except: print('error')
