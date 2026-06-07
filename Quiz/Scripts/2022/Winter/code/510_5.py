try:
    
    a,b,c=6,8,9
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=4,c=3,1)
    print(a,b,c)
    
except: print('error')
