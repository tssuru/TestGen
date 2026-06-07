try:
    
    a,b,c=7,9,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(b=1,c=2,b=4)
    print(a,b,c)
    
except: print('error')
