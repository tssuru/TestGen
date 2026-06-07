try:
    
    a,b,c=6,9,8
    def f(a,b=7,c=6):
        print(a,b,c,end="")
    
    f(0,c=5)
    print(a,b,c)
    
except: print('error')
