try:
    
    a,b,c=7,8,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=1,a=4,c=1)
    print(a,b,c)
    
except: print('error')
