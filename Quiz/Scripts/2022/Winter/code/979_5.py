try:
    
    a,b,c=6,9,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(c=4,a=5,b=2)
    print(a,b,c)
    
except: print('error')
