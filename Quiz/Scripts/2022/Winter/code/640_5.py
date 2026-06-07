try:
    
    a,b,c=6,9,8
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(a=0,2,a=0)
    print(a,b,c)
    
except: print('error')
