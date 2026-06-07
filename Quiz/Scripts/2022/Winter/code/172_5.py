try:
    
    a,b,c=6,9,8
    def f(a,b=6,c=7):
        print(a,b,c,end="")
    
    f(3,0)
    print(a,b,c)
    
except: print('error')
