try:
    
    a,b,c=9,8,9
    def f(a,b=7,c=6):
        print(a,b,c,end="")
    
    f(0,c=2)
    print(a,b,c)
    
except: print('error')
