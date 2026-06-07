try:
    
    a,b,c=6,9,7
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=1,c=4,0)
    print(a,b,c)
    
except: print('error')
